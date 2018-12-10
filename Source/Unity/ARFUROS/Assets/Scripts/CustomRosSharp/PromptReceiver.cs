using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PromptReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(PromptMessage)); } }
        public PromptMessage message;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            message = (PromptMessage)e.Message;
        }
    }
}