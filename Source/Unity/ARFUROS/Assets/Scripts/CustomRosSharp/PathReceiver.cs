using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PathReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(NavigationPath)); } }
        public NavigationPath rawMessage;
        public int numPoints;
        public Vector3[] path;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (NavigationPath)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            numPoints = rawMessage.poses.Length;
            path = new Vector3[numPoints];

            for (int i = 0; i < numPoints; i++)
            {
                path[i].x = rawMessage.poses[i].pose.position.x;
                path[i].y = rawMessage.poses[i].pose.position.y;
                path[i].z = rawMessage.poses[i].pose.position.z;

            }
        }
    }
}