using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class OccupancyGridReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(NavigationOccupancyGrid)); } }
        private NavigationOccupancyGrid rawMessage;

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
            
        }
    }
}