using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using RosSharp.RosBridgeClient;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PointCloudReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(GeometryPoseArray)); } }
        private GeometryPoseArray rawMessage;

        public Text particleCount;
        public int seq;

        public int numPoints;
        public Vector3[] points;

        void Update()
        {
            seq = rawMessage.header.seq;
            numPoints = rawMessage.poses.Length;
            particleCount.text = "Particle Received: " + numPoints.ToString() + "Seq: " + seq.ToString();
        }

        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (GeometryPoseArray)e.Message;
            UpdateValues();
        }

        private void UpdateValues()
        {
            seq = rawMessage.header.seq;
            numPoints = rawMessage.poses.Length;

            //particleCount.text = "Particle Received: " + numPoints.ToString();

            points = new Vector3[numPoints];

            for (int i = 0; i< numPoints; i++)
            {
                points[i].x = rawMessage.poses[i].position.x;
                points[i].y = rawMessage.poses[i].position.y;
                points[i].z = rawMessage.poses[i].position.z;
            }
        }
            /*
            public override Type MessageType { get { return (typeof(SensorPointCloud2)); } }
            private SensorPointCloud2 rawMessage;

            // public StandardHeader header;
            public int height;
            public int width;
            public SensorPointField[] fields;
            //public bool is_bigendian;
            public int point_step;
            public int row_step;

            public int[] data;
            public int[] ProbData;

            public bool is_dense;

            public int dataLength;


            private void Awake()
            {
                MessageReception += ReceiveMessage;
            }

            private void ReceiveMessage(object sender, MessageEventArgs e)
            {
                rawMessage = (SensorPointCloud2)e.Message;
                UpdateValues();
            }

            private void UpdateValues()
            {
                dataLength = rawMessage.data.Length;
                row_step = rawMessage.row_step;
                height = rawMessage.height;
                width = rawMessage.width;
                point_step = rawMessage.point_step;

                fields = rawMessage.fields;

                is_dense = rawMessage.is_dense;

                //ProbData = new byte[dataLength];


                ProbData = new int[dataLength];
                for(int i = 0; i < (height*row_step); i++)
                {
                    ProbData[i] = rawMessage.data[i];
                }


                //ProbData = rawMessage.data; 
                //data = rawMessage.data;

            }
            */
        }
}