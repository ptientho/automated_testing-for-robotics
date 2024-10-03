To test ROS1 run

source /opt/ros/noetic/setup.bash
source ~/simulation_ws/devel/setup.bash
roslaunch tortoisebot_gazebo tortoisebot_playground.launch
rostest tortoisebot_waypoints waypoints_test.test --reuse-master

#############################
Please note that, in my test file, 3 test scenarios were created. The expected result should be 2 cases pass and 1 case causes error (not fail).
I do like this because all tests will be in one test suite and one test file.
#############################

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
To test ROS2 

source /opt/ros/latest/setup.bash
source ~/ros2_ws/install/setup.bash
ros2 launch tortoisebot_bringup bringup.launch.py use_sim_time:=True

##########################
Run action server in a separate shell

source /opt/ros/latest/setup.bash
ource ~/ros2_ws/install/setup.bash
ros2 run tortoisebot_waypoints tortoisebot_action_server_node

###########################
Run test file in a separate shell

source /opt/ros/latest/setup.bash
source ~/ros2_ws/install/setup.bash
colcon test --packages-select tortoisebot_waypoints --event-handler=console_direct+

colcon test-result --verbose