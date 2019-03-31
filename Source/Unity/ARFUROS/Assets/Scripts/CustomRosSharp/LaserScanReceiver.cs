using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class LaserScanReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(SensorLaserScan)); } }
        public SensorLaserScan rawMessage;
        
        public float angle_min;
        public float angle_max;
        public float angle_increment;
        public float range_min;
        public float range_max;
        public int range_size;
        public float[] ranges;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (SensorLaserScan)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            angle_min = rawMessage.angle_min;
            angle_max = rawMessage.angle_max;
            angle_increment = rawMessage.angle_increment;
            range_min = rawMessage.range_min;
            range_max = rawMessage.range_max;
            range_size = rawMessage.ranges.Length;
            ranges = rawMessage.ranges;
        }
    }
}