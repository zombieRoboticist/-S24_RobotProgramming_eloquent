from launch import LaunchDescription

#######
from launch_ros.actions import Node
#######
from launch_ros.substitutions import FindPackageShare

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution, TextSubstitution

def generate_launch_description():
    server = Node(

    #########
            package = 'draw_shape',
    ########
            
            executable = 'go_to_point')

    client = Node(
            package = 'draw_shape',
            executable = 'shape_sub',
            
            ######
           # parameters = [{'turtleColor': 'blue', 'penSize':10}])
            ######

    movement =  IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('yahboomcar_bringup'), #package name
                    'launch',   #folder
                    'yahboomcar_bringup_X3_launch.py' #file
                ])
            ]),
            launch_arguments={
            }.items()
        )

    return LaunchDescription([
        server,
        
        #######
        client,
        #######
        
        movement])
