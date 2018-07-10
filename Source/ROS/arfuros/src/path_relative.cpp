#include "ros/ros.h"
#include "nav_msgs/Path.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/transform_listener.h"

#include <sstream>
#include <string>

const std::string publishFrame = "base_link";
const std::string inputFrame = "odom";

geometry_msgs::TransformStamped transform;
ros::Publisher relativePub;

nav_msgs::Path relativePath(const nav_msgs::Path::ConstPtr& globalPath){
	nav_msgs::Path relative = *globalPath;
	relative.header.frame_id = publishFrame;
	
	for(int i = 0; i < relative.poses.size(); i++){
		tf2::doTransform(relative.poses[i], relative.poses[i], transform);
	}

	return relative;
}

void pathCallback(const nav_msgs::Path::ConstPtr& inMsg){
	nav_msgs::Path outMsg;
	outMsg = relativePath(inMsg);
	relativePub.publish(outMsg);
}


int main (int argc, char **argv){
	ros::init(argc, argv, "path_relative");
	ros::NodeHandle n;
	
	relativePub = n.advertise<nav_msgs::Path>("/path_relative", 5);
	ros::Subscriber globalSub  = n.subscribe("/move_base/DWAPlannerROS/global_plan", 5, pathCallback);
	
	tf2_ros::Buffer tBuffer;
	tf2_ros::TransformListener tf2_listener (tBuffer);
	

	while(ros::ok()){
	
		try{
			transform = tBuffer.lookupTransform(publishFrame, inputFrame, ros::Time(0), ros::Duration(1.0));
		}
		catch(tf2::TransformException e){
			ROS_INFO("%s \n", e.what());
		}

		ros::spinOnce();		
	}
	
	return 0;
}

