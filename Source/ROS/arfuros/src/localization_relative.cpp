#include "ros/ros.h"
#include "geometry_msgs/PoseArray.h"
#include "geometry_msgs/PoseStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/transform_listener.h"

#include <sstream>
#include <string>

const std::string publishFrame = "base_link";
const std::string inputFrame = "map";
const int minPubFreq = 2;

geometry_msgs::TransformStamped transform;
ros::Publisher relativePub;
geometry_msgs::PoseArray outMsg;
ros::Time latestPubTime;

geometry_msgs::PoseArray relativeLocalization(const geometry_msgs::PoseArray::ConstPtr& mapLocalization){
	geometry_msgs::PoseArray relative = *mapLocalization;
	relative.header.frame_id = publishFrame;
	
	for(int i = 0; i < relative.poses.size(); i++){
		geometry_msgs::PoseStamped stampedPose;
		stampedPose.header = mapLocalization->header;
		stampedPose.pose = relative.poses[i];
		tf2::doTransform(stampedPose, stampedPose, transform);
		relative.poses[i]= stampedPose.pose;
	}

	return relative;
}

void localizationCallback(const geometry_msgs::PoseArray::ConstPtr& inMsg){
	outMsg = relativeLocalization(inMsg);
	relativePub.publish(outMsg);
	latestPubTime = ros::Time::now(); 
}


int main (int argc, char **argv){
	ros::init(argc, argv, "localization_relative");
	ros::NodeHandle n;
	
	relativePub = n.advertise<geometry_msgs::PoseArray>("/ARFUROS/Localization", 5);
	ros::Subscriber globalSub  = n.subscribe("/particlecloud", 5, localizationCallback);
	
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
		
		if(ros::Time::now() - latestPubTime > ros::Duration(1/minPubFreq)){
			relativePub.publish(outMsg);
			latestPubTime = ros::Time::now(); 
		}
	}
	
	return 0;
}

