using System;
using UnityEngine;

namespace RosSharp.RosBridgeClient
{
    public class OccupancyGridPublisher : MonoBehaviour
    {
        public string Topic;
        public OccupancyGridReceiver MessageProvider;
        public RosConnector rosConnector;

        protected RosSocket rosSocket;
        protected string publicationId;

        private int last_id = -1;

        private void Start()
        {
            rosSocket = rosConnector.RosSocket;
            publicationId = rosSocket.Advertise(Topic, MessageTypes.RosMessageType(MessageProvider.MessageType));
        }

        private void Update()
        {
            if (MessageProvider.rawMessage.header.seq > last_id)
            {
                rosSocket.Publish(publicationId, MessageProvider.rawMessage);
            }
        }

    }
}