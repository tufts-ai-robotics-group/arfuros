using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class BlinkerReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(BlinkerMsg)); } }
        private BlinkerMsg rawMessage;
        public string path;
        public uint numpoints_thresh;
        public uint outlook_thresh;
        public float deviation_thresh;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (BlinkerMsg)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            //Debug.Log("Recieved Blinker Message");
            path = rawMessage.path;
            numpoints_thresh = rawMessage.numpoints_thresh;
            outlook_thresh = rawMessage.outlook_thresh;
            deviation_thresh = rawMessage.deviation_thresh;
        }
    }
}