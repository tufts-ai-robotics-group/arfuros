using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class OccupancyGridReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(NavigationOccupancyGrid)); } }
        private NavigationOccupancyGrid rawMessage;
        
        public Vector3 origin;
        public Quaternion origin_orientation;
        public int[] ProbData;
        public int count;
        public int height;
        public int width; 
        public float resolution;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (NavigationOccupancyGrid)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            height = checked((int)rawMessage.info.height);
            width = checked((int)rawMessage.info.width);
            resolution = rawMessage.info.resolution;
            
            origin = new Vector3(rawMessage.info.origin.position.x,
            rawMessage.info.origin.position.y, rawMessage.info.origin.position.z);

            origin_orientation = new Quaternion(rawMessage.info.origin.orientation.x,
                rawMessage.info.origin.orientation.y, rawMessage.info.origin.orientation.z,
                rawMessage.info.origin.orientation.w);

            count = height * width;

            // Fill data 
            ProbData = new int[count];
            for (int i = 0; i < count; i++)
            {
                ProbData[i] = rawMessage.data[i];
            }
        }
    }
}