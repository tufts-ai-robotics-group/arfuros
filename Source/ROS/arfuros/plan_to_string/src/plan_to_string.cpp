#include "ros/ros.h"
#include "nav_msgs/Path.h"
#include "std_msgs/String.h"

#include <string>
#include <sstream>

ros::Publisher localPub;
ros::Publisher globalPub;

std::string convertToString(const nav_msgs::Path::ConstPtr& pathData){
	std::stringstream ss;
	
	for (int i = 0; i < pathData->poses.size(); i++){
		ss << pathData->poses[i].pose.position.x <<"|";
		ss << pathData->poses[i].pose.position.y <<"|";
		ss << pathData->poses[i].pose.position.z <<"|";
	}
	
	return ss.str();
}

void localCallback(const nav_msgs::Path::ConstPtr& inMsg){
	std_msgs::String outMsg;
	outMsg.data = convertToString(inMsg);
	localPub.publish(outMsg);
}

void globalCallback(const nav_msgs::Path::ConstPtr& inMsg){
	std_msgs::String outMsg;
	outMsg.data = convertToString(inMsg);
	globalPub.publish(outMsg);
}


int main (int argc, char **argv){
	ros::init(argc, argv, "path_to_string");
	ros::NodeHandle n;
	
	localPub = n.advertise<std_msgs::String>("local_path_string", 100);
	globalPub = n.advertise<std_msgs::String>("global_path_string", 100);

	
	ros::Subscriber localSub  = n.subscribe("/move_base/DWAPlannerROS/local_plan", 100, localCallback);
	ros::Subscriber globalSub  = n.subscribe("/move_base/DWAPlannerROS/global_plan", 100, globalCallback);
	
	while(ros::ok()){
		ros::spin();
	}
	
	return 0;
}
