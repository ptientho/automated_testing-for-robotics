# CMake generated Testfile for 
# Source directory: /home/user/ros2_ws/src/tortoisebot_waypoints
# Build directory: /home/user/ros2_ws/build/tortoisebot_waypoints
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tortoisebot_waypoints_test "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tortoisebot_waypoints/test_results/tortoisebot_waypoints/tortoisebot_waypoints_test.gtest.xml" "--package-name" "tortoisebot_waypoints" "--output-file" "/home/user/ros2_ws/build/tortoisebot_waypoints/ament_cmake_gtest/tortoisebot_waypoints_test.txt" "--command" "/home/user/ros2_ws/build/tortoisebot_waypoints/tortoisebot_waypoints_test" "--gtest_output=xml:/home/user/ros2_ws/build/tortoisebot_waypoints/test_results/tortoisebot_waypoints/tortoisebot_waypoints_test.gtest.xml")
set_tests_properties(tortoisebot_waypoints_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/user/ros2_ws/build/tortoisebot_waypoints/tortoisebot_waypoints_test" TIMEOUT "300" WORKING_DIRECTORY "/home/user/ros2_ws/build/tortoisebot_waypoints" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/user/ros2_ws/src/tortoisebot_waypoints/CMakeLists.txt;82;ament_add_gtest;/home/user/ros2_ws/src/tortoisebot_waypoints/CMakeLists.txt;0;")
subdirs("gtest")
