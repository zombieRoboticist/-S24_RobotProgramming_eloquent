#based on Intro to Robot Programming Lab03 turtlebot_server.py - Modified 04-16-2024

import rclpy
from rclpy.node import Node
import math
import time

from geometry_msgs.msg import Twist, Pose

from draw_shape_interfaces.srv import GoToPoint
# from turtle_interfaces.srv import SetColor
# from turtle_interfaces.msg import TurtleMsg

class GoToPointServer(Node):
    def __init__(self):
        super().__init__('goToPointServer')

        # # initialize a turtle
        self.vel = Twist()

        # publisher of turtlebot state
        self.twist_pub = self.create_publisher(Twist, 'cmd_vel', 1)

        self.pose_x = 0 # velocty in x-direction (in the turtle frame), unit: pix/sec
        self.pose_y = 0 # angular velicty in yaw-direction (in the turtle frame), unit: rad/sec
        self.des_x = 0
        self.des_y = 0


        #### subsciber to car cmd ####
        self.pose_sub = self.create_subscription(Pose, 'robot_pose', self.pose_callback, 1)
        #######################

        #### Driving Simulation Timer ####
        self.sim_interval = 0.02
        self.create_timer(self.sim_interval, self.driving_timer_cb)

        self.goToPoint_srv = self.create_service(GoToPoint, 'desired_pose', self.go_to_pose_callback)


    def pose_callback(self, msg):

        self.pose_x = msg.pose.position.x
        self.pose_y = msg.pose.position.y

    def go_to_pose_callback(self, request, response):
        self.des_x = request.desired_pose.x
        self.des_y = request.desired_pose.y
        self.get_logger().info(f"Going to pose {self.des_x}, {self.des_y}")
        tol = 0.1
        Kp = 1
        while(1):
            xError = self.des_x - self.pose_x
            yError = self.des_y - self.pose_y

            self.vel.linear.x = xError * Kp
            self.vel.linear.y = yError * Kp


            if(abs(xError) < tol and abs(yError) < tol):
                self.vel.linear.x = 0
                self.vel.linear.y = 0
                break
        time.sleep(2)
        response.ret = 0
        return response

    def driving_timer_cb(self):

        # # convert quaternion to rpy
        # roll, pitch, yaw = rpy_from_quat(self.turtle.turtle_pose.orientation.x,
        #                                 self.turtle.turtle_pose.orientation.y,
        #                                 self.turtle.turtle_pose.orientation.z,
        #                                 self.turtle.turtle_pose.orientation.w)

        # # basic position/velocity physics
        # new_x = self.turtle.turtle_pose.position.x + self.vel_x*self.sim_interval*math.cos(yaw)
        # new_y = self.turtle.turtle_pose.position.y + self.vel_x*self.sim_interval*math.sin(yaw)
        # new_yaw = yaw + self.ang_vel*self.sim_interval

        # # assign to the turtle obj
        # self.turtle.turtle_pose.position.x = new_x
        # self.turtle.turtle_pose.position.y = new_y
        
        # # convert to quaternion
        # qx, qy, qz, qw = quat_from_rpy(0, 0, new_yaw)
        # self.turtle.turtle_pose.orientation.x = qx
        # self.turtle.turtle_pose.orientation.y = qy
        # self.turtle.turtle_pose.orientation.z = qz
        # self.turtle.turtle_pose.orientation.w = qw

        # # publish new turtle state
        # self.turtle_pub.publish(self.turtle)

        self.twist_pub.publish(self.vel)


# def quat_from_rpy(roll, pitch, yaw):

#     cy = math.cos(yaw*0.5)
#     sy = math.sin(yaw*0.5)
#     cp = math.cos(pitch*0.5)
#     sp = math.sin(pitch*0.5)
#     cr = math.cos(roll*0.5)
#     sr = math.sin(roll*0.5)

#     qw = cr * cp * cy + sr * sp * sy
#     qx = sr * cp * cy - cr * sp * sy
#     qy = cr * sp * cy + sr * cp * sy
#     qz = cr * cp * sy - sr * sp * cy

#     return qx, qy, qz, qw

# def rpy_from_quat(x, y, z, w):

#     srcp = 2*(w*x + y*z)
#     crcp = 1-2*(x*x + y*y)
#     roll = math.atan2(srcp, crcp)

#     sp = 2*(w*y - z*x)
#     if math.fabs(sp) >= 1:
#         pitch = (sp/math.fabs(sp))*math.pi/2
#     else:
#         pitch = math.asin(sp)
    
#     sycp = 2*(w*z + x*y)
#     cycp = 1 - 2*(y*y + z*z)
#     yaw = math.atan2(sycp, cycp)

#     return roll, pitch, yaw

def main(args=None):

    #initial ros2
    rclpy.init(args=args)

    # initial turtlebotserver object
    ser_obj = GoToPointServer()
    ser_obj.get_logger().info('goToPoint server started!')

    # spin the node
    rclpy.spin(ser_obj)

    # Destroy the node explicitly
    ser_obj.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()