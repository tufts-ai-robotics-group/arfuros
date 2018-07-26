/*****************************
costmap_arfuros.cpp
ARFUROS
Faizan Muhammad
AIR Lab
Tufts University
*****************************/

#include "ros/ros.h"
#include "nav_msgs/OccupancyGrid.h"
#include "geometry_msgs/PoseStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/transform_listener.h"

#include <sstream>
#include <string>

const std::string TOPIC_IN  = "/move_base/local_costmap/costmap";
const std::string TOPIC_OUT = "/ARFUROS/Costmap";
const std::string FRAME_IN  = "odom";
const std::string FRAME_OUT = "base_link";
const int         FREQUENCY = 30;

geometry_msgs::TransformStamped transform;
ros::Publisher relativePub;
nav_msgs::OccupancyGrid latestMsg;

nav_msgs::OccupancyGrid transformLocalization(nav_msgs::OccupancyGrid input){
    nav_msgs::OccupancyGrid transformed = input;
    transformed.header.frame_id = FRAME_OUT;
    
    geometry_msgs::PoseStamped stampedPose;
    stampedPose.header = input.header;
    stampedPose.pose = transformed.info.origin;
    tf2::doTransform(stampedPose, stampedPose, transform);
    transformed.info.origin = stampedPose.pose;

    return transformed;
}

void costmapCallback(const nav_msgs::OccupancyGrid::ConstPtr& inMsg){
    latestMsg = *inMsg;
}

void publishLatest(){
    relativePub.publish(transformLocalization(latestMsg));
}

int main (int argc, char **argv){
    ros::init(argc, argv, "costmap_arfuros");
    ros::NodeHandle n;
    
    relativePub = n.advertise<nav_msgs::OccupancyGrid>(TOPIC_OUT, 5);
    ros::Subscriber globalSub  = n.subscribe(TOPIC_IN, 5, costmapCallback);
    
    tf2_ros::Buffer tBuffer;
    tf2_ros::TransformListener tf2_listener (tBuffer);
    
    ros::Rate rate(FREQUENCY);
    while(ros::ok()){
    
        try{
            transform = tBuffer.lookupTransform(FRAME_OUT, FRAME_IN, ros::Time(0), ros::Duration(1.0));
        }
        catch(tf2::TransformException e){
            ROS_INFO("%s \n", e.what());
        }

        ros::spinOnce();    
        publishLatest();
        rate.sleep();
    }
    
    return 0;
}

