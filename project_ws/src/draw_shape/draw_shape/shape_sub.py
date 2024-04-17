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

		
	def listener_callback(self,msg):
		self.get_logger().info('drawing shape "%s"' %msg.shape)
		# Generate point list here
		# We will call send request from here as well
		points = [[1.0,1.0,1.0],[2.0,2.0,2.0],[3.0,3.0,3.0],[0.0,0.0,0.0]]

		for i in range(len(points)):
			self.get_logger().info(f'sending point {i}')
			self.x_targ = points[i][0]
			self.y_targ = points[i][1]
			self.z_targ = points[i][2]
			self.send_request()
			while(not self.future.done()):
				self.get_logger().info("in loop")
				pass
		self.get_logger().info('drawing complete')


	def send_request(self):
		self.req.desired_pose.x = self.x_targ
		self.req.desired_pose.y = self.y_targ
		self.req.desired_pose.z = self.z_targ
			
		self.future = self.cli.call_async(self.req)

		
def main(args=None):
	rclpy.init(args=args)
	translate_shape = TranslateShape()
	rclpy.spin(translate_shape)
	translate_shape.destroy()
	rclpy.shutdown()

	
if __name__ == '__main__':
	main()
