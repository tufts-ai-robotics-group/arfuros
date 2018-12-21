# Augmented Reality Framework in Unity for ROS

## Introduction

This package contains the Unity project and other materials associated with the Augmented Reality framework being developed at Autonomous Intelligent Robotics Lab at Tufts University. This repository has 2 branches; master contains code for 2D devices (iPads, Android phones etc.) and hololens contains code for Microsoft Hololens that implements the interface in 3d. The ROS code for the robot end can be found [here](https://github.com/faizan-m/arfuros_ros).

The goal for this framework is to allow robots to express their internal state (sensory, cognition, planning) as virtual objects over the real world for human users to see. The long term goal for this framework is to make it adaptive so that it corresponds more and more to the robot's situational awareness which it can exploit to better express itself in AR.

Currently, all the code is customized to work with Turtlebot robots and there are several dependencies and assumptions made in the framework to work with our lab's software architecture for ROS robots. Therefore, it is not currently in a publicly usable state though as we work through with it, it will become much better.

## How to Use
This repository contains code that can be compiled for the user devices. [This](https://github.com/faizan-m/arfuros_ros) repository contains the package that needs to be installed on the robot. 


