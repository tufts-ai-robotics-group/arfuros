# ros-sharp
ROS# is a set of open source software libraries and tools in C# for communicating with ROS from .NET applications, in particular Unity3D. The main repository can be found here: https://github.com/siemens/ros-sharp

This particular fork has the ROSBridgeClient included in Unity directly as scripts rather than as a .dll plugin. I needed this version to debug and test my code for another project. In the process, I made some slight changes to the code for C# version compatibility. Also note that you have to set the .NET API for your project to be 2.0 instead of 2.0 subset for it to work.

For usage copy this repo directly into your Unity assets folder.

All credit belongs to the original ros-sharp creators.
