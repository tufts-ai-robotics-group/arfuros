#include "ros/ros.h"
#include "nav_msgs/OccupancyGrid.h"
#include "geometry_msgs/PoseStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "tf2_ros/transform_listener.h"

#include <sstream>
#include <string>

const std::string publishFrame = "base_link";
const std::string inputFrame = "odom";
const int minPubFreq = 2;

geometry_msgs::TransformStamped transform;
ros::Publisher relativePub;
nav_msgs::OccupancyGrid outMsg;
ros::Time latestPubTime;

nav_msgs::OccupancyGrid relativeLocalization(const nav_msgs::OccupancyGrid::ConstPtr& odomCostmap){
	nav_msgs::OccupancyGrid relative = *odomCostmap;
	relative.header.frame_id = publishFrame;
	
	geometry_msgs::PoseStamped stampedPose;
	stampedPose.header = odomCostmap->header;
	stampedPose.pose = relative.info.origin;
	tf2::doTransform(stampedPose, stampedPose, transform);
	relative.info.origin = stampedPose.pose;

	return relative;
}

void costmapCallback(const nav_msgs::OccupancyGrid::ConstPtr& inMsg){
	outMsg = relativeLocalization(inMsg);
	relativePub.publish(outMsg);
	latestPubTime = ros::Time::now(); 
}


int main (int argc, char **argv){
	ros::init(argc, argv, "costmap_relative");
	ros::NodeHandle n;
	
	relativePub = n.advertise<nav_msgs::OccupancyGrid>("/ARFUROS/Costmap", 5);
	ros::Subscriber globalSub  = n.subscribe("/move_base/local_costmap/costmap", 5, costmapCallback);
	
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

