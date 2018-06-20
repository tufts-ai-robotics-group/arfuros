using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PathReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(NavPath)); } }
        public NavPath message;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            message = (NavPath)e.Message;
        }
    }
}