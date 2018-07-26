/*****************************
localization_arfuros.cpp
ARFUROS
Faizan Muhammad
AIR Lab
Tufts University
*****************************/

#include "ros/ros.h"
#include "geometry_msgs/PoseArray.h"
#include "geometry_msgs/PoseStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/transform_listener.h"

#include <sstream>
#include <string>

const std::string TOPIC_IN  = "/particlecloud";
const std::string TOPIC_OUT = "/ARFUROS/Localization";
const std::string FRAME_IN  = "map";
const std::string FRAME_OUT = "base_link";
const int         FREQUENCY = 30;

geometry_msgs::TransformStamped transform;
ros::Publisher relativePub;
geometry_msgs::PoseArray latestMsg;

geometry_msgs::PoseArray transformLocalization(geometry_msgs::PoseArray input){
    geometry_msgs::PoseArray transformed = input;
    transformed.header.frame_id = FRAME_OUT;
    
    for(int i = 0; i < transformed.poses.size(); i++){
        geometry_msgs::PoseStamped stampedPose;
        stampedPose.header = input.header;
        stampedPose.pose = transformed.poses[i];
        tf2::doTransform(stampedPose, stampedPose, transform);
        transformed.poses[i]= stampedPose.pose;
    }

    return transformed;
}

void localizationCallback(const geometry_msgs::PoseArray::ConstPtr& inMsg){
    latestMsg = *inMsg;
}

void publishLatest(){
    relativePub.publish(transformLocalization(latestMsg));
}

int main (int argc, char **argv){
    ros::init(argc, argv, "localization_arfuros");
    ros::NodeHandle n;
    
    relativePub = n.advertise<geometry_msgs::PoseArray>(TOPIC_OUT, 5);
    ros::Subscriber globalSub  = n.subscribe(TOPIC_IN, 5, localizationCallback);
    
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

