#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/String.h"

#include <string>
#include <sstream>

ros::Publisher filteredPub;

sensor_msgs::LaserScan filterScan(const sensor_msgs::LaserScan::ConstPtr& scanData){
	sensor_msgs::LaserScan filtered = *scanData;

	for (int i = 0; i < filtered.ranges.size(); i ++){
		if (isnan(filtered.ranges[i])){
			filtered.ranges[i] = -1;
		}
	}

	
	return filtered;
}

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& inMsg){
	sensor_msgs::LaserScan outMsg;
	outMsg = filterScan(inMsg);
	filteredPub.publish(outMsg);
}

int main (int argc, char **argv){
	ros::init(argc, argv, "laser_filter");
	ros::NodeHandle n;
	
	filteredPub = n.advertise<sensor_msgs::LaserScan>("/scan_filtered", 100);
	ros::Subscriber scanSub  = n.subscribe("/scan", 100, scanCallback);
	
	while(ros::ok()){
		ros::spin();
	}
	
	return 0;
}
