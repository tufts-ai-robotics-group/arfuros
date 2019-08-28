using UnityEngine;
using System;

//MarkerReceiver ADDITION TO ARFUROS PROJECT
//Charlie DeLorey
//06.24.19

namespace RosSharp.RosBridgeClient
{
    public class MarkerReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(Marker)); } }
        private Marker rawMessage;

        public uint arrow, cube, sphere, cylinder, linestrip, linelist, cubelist, spherelist, points_int, textviewfacing, meshresource, trianglelist, add, modify, delete, deleteall;
        
        public string ns;
        public int id;
        public int type;
        public int action;
        public Vector3 pose; //I'm not sure which values I have to update/change in this file
        public Vector3 scale;
        public ColorRGBA color;
        public Duration lifetime; 
        public bool frame_locked;
        public GeometryPoint[] points;
        public ColorRGBA[] colors;
        public string text;
        public string mesh_resource;
        public bool mesh_use_embedded_materials;

        public Quaternion orientation;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            Debug.Log("Received message for marker"); 
            rawMessage = (Marker)e.Message;
            //UpdateValues();
        }


        private void UpdateValues()
        {

            //not sure what to do about all the uints
            Debug.Log("Received marker message");

            //arrow = rawMessage.ARROW;
            //cube = rawMessage.CUBE;
            //sphere = rawMessage.SPHERE;
            //cylinder = rawMessage.CYLINDER;
            //linestrip = rawMessage.LINE_STRIP;
            //linelist = rawMessage.LINE_LIST;
            //cubelist = rawMessage.CUBE_LIST;
            //spherelist = rawMessage.SPHERE_LIST;
            //points_int = rawMessage.POINTS;
            //textviewfacing = rawMessage.TEXT_VIEW_FACING;
            //meshresource = rawMessage.MESH_RESOURCE;
            //trianglelist = rawMessage.TRIANGLE_LIST;
            //add = rawMessage.ADD;
            //modify = rawMessage.MODIFY;
            //delete = rawMessage.DELETE;
            //deleteall = rawMessage.DELETE_ALL;

            ns = rawMessage.ns;
            id = rawMessage.id;
            type = rawMessage.type;
            action = rawMessage.action;

            //set pose of marker (xyz location)
            pose = new Vector3(rawMessage.pose.position.x,
            rawMessage.pose.position.y, rawMessage.pose.position.z);

            //set orientation of marker
            orientation = new Quaternion(rawMessage.pose.orientation.x,
                rawMessage.pose.orientation.y, rawMessage.pose.orientation.z,
                rawMessage.pose.orientation.w);

            //set scale of marker
            scale = new Vector3(rawMessage.scale.x, rawMessage.scale.y, rawMessage.scale.z); 

            color = rawMessage.color;
            lifetime = rawMessage.lifetime;
            frame_locked = rawMessage.frame_locked;
            points = rawMessage.points;
            colors = rawMessage.colors;
            text = rawMessage.text;
            mesh_resource = rawMessage.mesh_resource;
            mesh_use_embedded_materials = rawMessage.mesh_use_embedded_materials;



    }


    }
}