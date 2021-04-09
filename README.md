# Augmented Reality Framework in Unity for ROS

## Installing to the Hololens 2 Notes
1. This project first was upgraded to Unity 2019.4, then following HoloLens 2 Marker Tracking with Vuforia Engine and MRTK [guide](https://arvrjourney.com/hololens-2-marker-tracking-with-vuforia-engine-and-mrtk-fb582c8f8ac0) from Madhawa Perera.
2. Install the Vuforia Engine Package from Git URL, git+https://git-packages.developer.vuforia.com#9.7.4
3. Install the MRTK foundation package, [MRTK Foundation](https://github.com/microsoft/MixedRealityToolkit-Unity/releases/download/v2.5.4/Microsoft.MixedReality.Toolkit.Unity.Foundation.2.5.4.unitypackage).
4. May have to delete the plugins folder containing subfolders Android and Github.
5. Deleteed the System.Threading.dll file found within ROSConnector
6. Deleted the Vuforia Folder and commented out vuforia lines within c sharp scripts.
7. User Interface has to change to work with the HoloLens2 MRTK (Could not interact with current UI)
8. Hardcoded the IP address to test if connection is possible, need to also change the inputfield on the new UI
9. Deleted the AR Camera and used the main camera within the MRTK scene and added the Vuforia Behavior script.
10. Updated the Vuforia Licence





## Introduction

This package contains the Unity project and other materials associated with the Augmented Reality framework being developed at Autonomous Intelligent Robotics Lab at Tufts University. This repository has 2 branches; master contains code for 2D devices (iPads, Android phones etc.) and hololens contains code for Microsoft Hololens that implements the interface in 3d. The ROS code for the robot end can be found [here](https://github.com/faizan-m/arfuros_ros).

The goal for this framework is to allow robots to express their internal state (sensory, cognition, planning) as virtual objects over the real world for human users to see. The long term goal for this framework is to make it adaptive so that it corresponds more and more to the robot's situational awareness which it can exploit to better express itself in AR.

Currently, all the code is customized to work with Turtlebot robots and there are several dependencies and assumptions made in the framework to work with our lab's software architecture for ROS robots. Therefore, it is not currently in a publicly usable state though as we work through with it, it will become much better.

## How to Use
This repository contains code that can be compiled for the user devices. [This](https://github.com/faizan-m/arfuros_ros) repository contains the package that needs to be installed on the robot. 

## How to Run
Once you have the ROS code downloaded on the robot and the Unity app downloaded on another device, check to make sure both devices are on the same WiFi network. They rely on the WiFi to talk to each other, so it's important that you have a stable connection. If you are in the AIR Lab, be mindful of which WiFi; Tufts Guest will often block the connection. We have had the most success with Tufts Wireless. 

Start running roscore on your robot and launch the ARFUROS program. 
The command for robots with lidar is: `roslaunch arfuros tbot2_lidar.launch`
Otherwise: `roslaunch arfuros tbot2.launch` 

Check for the IP address on the robot and type it into the appropriate text field on the menu screen. (On our lab's Ubuntu computers, you can find the IP address by typing "`ifconfig`" into the command line and look for the "inet addr"). Check or uncheck any information that you want to have visualized and press "Apply." The ARView scene will then load. As you walk around the robot, you can see the information projected in AR as the robot moves through its environment! 


