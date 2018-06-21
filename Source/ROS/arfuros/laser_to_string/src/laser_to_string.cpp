#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/String.h"

#include <string>
#include <sstream>

ros::Publisher stringPub;

std::string convertToString(const sensor_msgs::LaserScan::ConstPtr& scanData){
	std::stringstream ss;
	ss << scanData->angle_min <<"|";
	ss << scanData->angle_max << "|";
	ss << scanData->angle_increment << "|";
	
	ss << scanData->range_min << "|";
	ss << scanData->range_max << "|";
	
	ss << scanData->ranges.size() << "|";
	
	for (int i = 0; i < scanData->ranges.size(); i++){
		ss << scanData->ranges[i] << "|";
	}
	
	return ss.str();
}

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& inMsg){
	std_msgs::String outMsg;
	outMsg.data = convertToString(inMsg);
	stringPub.publish(outMsg);
}

int main (int argc, char **argv){
	ros::init(argc, argv, "laser_to_string");
	ros::NodeHandle n;
	
	stringPub = n.advertise<std_msgs::String>("scan_string", 100);
	ros::Subscriber scanSub  = n.subscribe("/scan", 100, scanCallback);
	
	while(ros::ok()){
		ros::spin();
	}
	
	return 0;
}
