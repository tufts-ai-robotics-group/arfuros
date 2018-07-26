/*****************************
laserscan_arfuros.cpp
ARFUROS
Faizan Muhammad
AIR Lab
Tufts University
*****************************/

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/String.h"

#include <string>
#include <sstream>

const std::string TOPIC_IN  = "/scan";
const std::string TOPIC_OUT = "/ARFUROS/LaserScan";
const int REDUCTION_FACTOR  = 2;

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

    int reduced_size = input.ranges.size() / REDUCTION_FACTOR;

    output.angle_increment *= REDUCTION_FACTOR;
    output.angle_max = output.angle_min + output.angle_increment * reduced_size;

    output.ranges.resize(reduced_size);
    output.intensities.resize(0);

    for(int i = 0; i < reduced_size; i++){
        output.ranges[i] = input.ranges[i*REDUCTION_FACTOR];
    }

    return output;
}

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& inMsg){
    filteredPub.publish(filterScan(reducePoints(*inMsg)));
}

int main (int argc, char **argv){
    ros::init(argc, argv, "laserscan_arfuros");
    ros::NodeHandle n;
    
    filteredPub = n.advertise<sensor_msgs::LaserScan>(TOPIC_OUT, 5);
    ros::Subscriber scanSub  = n.subscribe(TOPIC_IN, 5, scanCallback);
    
    ros::spin();
    
    return 0;
}
