using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class StringReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(StandardString)); } }
        private StandardString rawMessage;

        public String string_val;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (StandardString)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            string_val = rawMessage.data;
        }
    }
}