from launch import LaunchDescription

#######
from launch_ros.actions import Node
#######

def generate_launch_description():
    server = Node(

    #########
            package = 'python_turtle',
    ########
            
            executable = 'turtlebot_server')

    client = Node(
            package = 'python_turtle',
            executable = 'turtlebot_client',
            
            ######
            parameters = [{'<__name__>': '<___value___>'}])
            ######

    teleop = Node(
            package = 'teleop_twist_keyboard',
            executable = 'teleop_twist_keyboard',
            output = 'screen',
            prefix = 'gnome-terminal --')

    return LaunchDescription([
        server,
        
        #######
        client,
        #######
        
        teleop])
