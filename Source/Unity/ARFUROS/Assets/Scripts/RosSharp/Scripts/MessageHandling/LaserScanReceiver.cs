using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class LaserScanReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(LaserScan)); } }
        public LaserScan message;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            message = (LaserScan)e.Message;
            Debug.Log("Recieved message");
        }
    }
}