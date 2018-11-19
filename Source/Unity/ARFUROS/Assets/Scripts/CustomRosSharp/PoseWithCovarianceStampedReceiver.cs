using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PoseWithCovarianceStampedReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(GeometryPoseWithCovarianceStamped)); } }
        private GeometryPoseWithCovarianceStamped rawMessage;
        public Vector3 position;
        public Quaternion orientation;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (GeometryPoseWithCovarianceStamped)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            GeometryPoint rosP = rawMessage.pose.pose.position;
            GeometryQuaternion rosQ = rawMessage.pose.pose.orientation;

            position = new Vector3 (-rosP.y, rosP.z, rosP.x);
            orientation = new Quaternion(-rosQ.x, rosQ.z, rosQ.y, rosQ.w);
        }
    }
}