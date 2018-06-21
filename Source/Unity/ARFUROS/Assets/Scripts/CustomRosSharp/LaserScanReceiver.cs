using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class LaserScanReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(StandardString)); } }
        private StandardString rawMessage;
        
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
            rawMessage = (StandardString)e.Message;
            convertToScan();
        }

        private void convertToScan()
        {
            char[] charSeparators = new char[] { '|' };
            string[] result;

            result = rawMessage.data.Split(charSeparators, StringSplitOptions.RemoveEmptyEntries);

            angle_min = Convert.ToSingle(result[0]);

            angle_max = Convert.ToSingle(result[1]);

            angle_increment = Convert.ToSingle(result[2]);

            range_min = Convert.ToSingle(result[3]);
            range_max = Convert.ToSingle(result[4]);
            range_size = Convert.ToInt32(result[5]);

            ranges = new float[range_size];
            for (int i = 0; i < range_size; i++)
            {
                string curr = result[6 + i];
                if (curr == "nan")
                    ranges[i] = -1;
                else
                    ranges[i] = Convert.ToSingle(curr);
            }
        }
    }
}