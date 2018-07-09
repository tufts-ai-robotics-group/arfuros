using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PoseArrayReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(GeometryPoseArray)); } }
        private GeometryPoseArray rawMessage;
        public Vector3[] poses;


        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (GeometryPoseArray)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {

            poses = new Vector3[rawMessage.poses.Length];

            for (int i = 0; i < rawMessage.poses.Length; i++)
            {
                poses[i].x = rawMessage.poses[i].position.x;
                poses[i].y = rawMessage.poses[i].position.y;
                poses[i].z = rawMessage.poses[i].position.z;
            }

        }
    }
}