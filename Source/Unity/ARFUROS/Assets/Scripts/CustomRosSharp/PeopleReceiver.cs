using UnityEngine;
using System;

namespace RosSharp.RosBridgeClient
{
    public class PeopleReceiver : MessageReceiver
    {
        public override Type MessageType { get { return (typeof(PeoplePositionMeasurementArray)); } }
        private PeoplePositionMeasurementArray rawMessage;
        public Vector3[] people;


        private void Awake()
        {
            MessageReception += ReceiveMessage;
        }

        private void ReceiveMessage(object sender, MessageEventArgs e)
        {
            rawMessage = (PeoplePositionMeasurementArray)e.Message;
            UpdateValues();
        }

        private void UpdateValues() {

            people = new Vector3 [rawMessage.people.Length];

            for(int i = 0; i < rawMessage.people.Length; i++)
            {
                people[i].x = rawMessage.people[i].pos.x;
                people[i].y = rawMessage.people[i].pos.y;
                people[i].z = rawMessage.people[i].pos.z;
            }

        }
    }
}