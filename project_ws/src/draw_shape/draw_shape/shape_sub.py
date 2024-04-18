import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from draw_shape_interfaces.msg import ShapeDef
from draw_shape_interfaces.srv import GoToPoint
import sys

class TranslateShape(Node):

	def __init__(self):
	
		super().__init__('translate_shape')
		self.subscription = self.create_subscription(ShapeDef, 'shape', self.listener_callback, 10)

		# client init
		self.cli = self.create_client(GoToPoint, 'desired_pose')
		while not self.cli.wait_for_service(timeout_sec=1.0):
			self.get_logger().info('service not available, waiting...')
		self.req = GoToPoint.Request()

		#other variables
		self.futures = []

		self.scale_vals={
			1:0.1,
			2:0.2,
			3:0.3,
			4:0.4,
			5:0.5
		}
		self.shape_points = {
			'square'	:	[[1.0, 0.0, 0.0],[1.0, 1.0, 0.0],[0.0,1.0,0.0],[0.0,0.0,0.0]],
			'triangle'	:	[[1.0,0.5,0.0],[0.0,1.0,0.0],[0.0,0.0,0.0]],
			'line'		:	[[1.0,0.0,0.0],[0.0,0.0,0.0]]
		}

		
	def listener_callback(self,msg):
		if (any(msg.shape in x for x in self.shape_points.keys()) & 
	  			any(msg.shape in x for x in self.shape_points.keys())):
			self.get_logger().info('drawing shape "%s"' %msg.shape)
			# Generate point list here
			# We will call send request from here as well
			scale_fact = self.scale_vals[msg.size]
			shape = self.shape_points[msg.shape]

			points=[[j*scale_fact for j in i] for i in shape]
			
			for i in range(len(points)):
				self.get_logger().info(f'sending point {i}')
				self.x_targ = points[i][0]
				self.y_targ = points[i][1]
				self.z_targ = points[i][2]
				self.send_request()
		else:self.get_logger().info("Invalid shape or size sent")


	def send_request(self):
		self.req.desired_pose.x = self.x_targ
		self.req.desired_pose.y = self.y_targ
		self.req.desired_pose.z = self.z_targ
			
		self.futures.append(self.cli.call_async(self.req))

	def spin(self):
		# This loop structure from codebot/ros2_patterns github repo
		while rclpy.ok():
			rclpy.spin_once(self)
			incomplete_futures = []
			for f in self.futures:
				if f.done():	
					res = f.result()
					self.get_logger().info("Arrived at point!")
				else:
					incomplete_futures.append(f)
			self.futures = incomplete_futures
	

		
def main(args=None):
	rclpy.init(args=args)
	translate_shape = TranslateShape()
	translate_shape.get_logger().info("Shape Translator Started")
	translate_shape.spin()
	translate_shape.destroy()
	rclpy.shutdown()

	
if __name__ == '__main__':
	main()
