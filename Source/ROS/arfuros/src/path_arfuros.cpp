/*****************************
path_arfuros.cpp
ARFUROS
Faizan Muhammad
AIR Lab
Tufts University
*****************************/

#include "ros/ros.h"
#include "nav_msgs/Path.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/transform_listener.h"

#include <sstream>
#include <string>

const std::string TOPIC_IN  = "/move_base/DWAPlannerROS/global_plan";
const std::string TOPIC_OUT = "/ARFUROS/Path";
const std::string FRAME_IN  = "odom";
const std::string FRAME_OUT = "base_link";
const int REDUCTION_FACTOR  = 5;
const int FREQUENCY         = 30;


geometry_msgs::TransformStamped transform;
nav_msgs::Path latestMsg;
ros::Publisher relativePub;

nav_msgs::Path reducePoints (nav_msgs::Path input){
    nav_msgs::Path output = input;

    int reduced_size = input.poses.size() / REDUCTION_FACTOR;

    output.poses.resize(reduced_size);

    for(int i = 0; i < reduced_size; i++){
        output.poses[i] = input.poses[i*REDUCTION_FACTOR];
    }

    return output;
}

nav_msgs::Path transformPath(nav_msgs::Path input){
    nav_msgs::Path transformed = input;
    transformed.header.frame_id = FRAME_OUT;
    
    for(int i = 0; i < transformed.poses.size(); i++){
        tf2::doTransform(transformed.poses[i], transformed.poses[i], transform);
    }

    return transformed;
}

void pathCallback(const nav_msgs::Path::ConstPtr& inMsg){
    latestMsg = reducePoints(*inMsg);
}

void publishLatest(){
    relativePub.publish(transformPath(latestMsg));
}

int main (int argc, char **argv){
    ros::init(argc, argv, "path_arfuros");
    ros::NodeHandle n;
    
    relativePub = n.advertise<nav_msgs::Path>(TOPIC_IN, 5);
    ros::Subscriber globalSub  = n.subscribe(TOPIC_OUT, 5, pathCallback);
    
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

