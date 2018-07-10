#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/String.h"

#include <string>
#include <sstream>

const int REDUCTION_FACTOR = 2;

ros::Publisher filteredPub;

sensor_msgs::LaserScan filterScan(sensor_msgs::LaserScan scanData){
	sensor_msgs::LaserScan filtered = scanData;

	for (int i = 0; i < filtered.ranges.size(); i ++){
		if (isnan(filtered.ranges[i])){
			filtered.ranges[i] = -1;
		}
	}

	return filtered;
}

sensor_msgs::LaserScan reducePoints(sensor_msgs::LaserScan input){
	sensor_msgs::LaserScan output = input;

	output.angle_increment *= REDUCTION_FACTOR;
	output.ranges.resize(input.ranges.size()/REDUCTION_FACTOR);
	output.intensities.resize(0);

	for(int i = 0; i < input.ranges.size()/REDUCTION_FACTOR; i++){
		output.ranges[i] = input.ranges[i*REDUCTION_FACTOR];
	}

	return output;
}

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& inMsg){
	sensor_msgs::LaserScan outMsg;
	outMsg = filterScan(reducePoints(*inMsg));
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
