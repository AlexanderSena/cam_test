/*
Publishes the gazebo camera image
*/

#include <ros/ros.h>
#include <gazebo_msgs/GetModelState.h>
#include <gazebo_msgs/ModelState.h>
// #include <libs/CameraPlugin.hh>
// #include <gazebo_plugins/gazebo_ros_camera.h>

using namespace ros;

Subscriber sub_cam;
Publisher  pub_cam;


void listen_cam() {


}

int main(int argc, char **argv) {
	init(argc, argv, "cam_test");
	NodeHandle nh;




	spin();

}