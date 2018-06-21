using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PathReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(StandardString)); } }
        private StandardString rawMessage;
        public int numPoints;
        public Vector3[] path;

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (StandardString)e.Message;
            convertToPath();
        }

        private void convertToPath()
        {
            char[] charSeparators = new char[] { '|' };
            string[] result;

            result = rawMessage.data.Split(charSeparators, StringSplitOptions.RemoveEmptyEntries);
            numPoints = result.Length / 3;
            path = new Vector3[numPoints];

            for(int i = 0; i < numPoints; i++)
            {
                path[i].x = Convert.ToSingle(result[3 * i]);
                path[i].y = Convert.ToSingle(result[3 * i + 1]);
                path[i].z = Convert.ToSingle(result[3 * i + 2]);
            }
        }
    }
}