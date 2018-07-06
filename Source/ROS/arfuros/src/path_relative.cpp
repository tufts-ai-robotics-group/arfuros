#include "ros/ros.h"
#include "nav_msgs/Path.h"
#include "std_msgs/String.h"

#include <string>
#include <sstream>

ros::Publisher relativePub;

nav_msgs::Path relativePath(const nav_msgs::Path::ConstPtr& globalPath){
	nav_msgs::Path relative = *globalPath;
	geometry_msgs::Pose firstPose;

	if(relative.poses.size() > 0){
		firstPose = relative.poses[0].pose;
	}
	
	for(int i = 0; i < relative.poses.size(); i++){
		relative.poses[i].pose.position.x -= firstPose.position.x;
		relative.poses[i].pose.position.y -= firstPose.position.y;
		relative.poses[i].pose.position.z -= firstPose.position.z;
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
	
	relativePub = n.advertise<nav_msgs::Path>("/path_relative", 100);
	ros::Subscriber globalSub  = n.subscribe("/move_base/DWAPlannerROS/global_plan", 100, pathCallback);

	while(ros::ok()){
		ros::spin();
	}
	
	return 0;
}
