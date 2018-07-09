cmake_minimum_required(VERSION 2.8.3)
project(cam_test)

find_package(catkin REQUIRED COMPONENTS roscpp gazebo_msgs geometry_msgs)

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(cam_test nodes/cam_test.cpp)

target_link_libraries(cam_test ${catkin_LIBRARIES})

