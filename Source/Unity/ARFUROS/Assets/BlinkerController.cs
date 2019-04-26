using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RosSharp.RosBridgeClient
{

    public class BlinkerController : MonoBehaviour
    {
        public StringReceiver stringReceiver;
        public SpriteBlinker leftBlinker;
        public SpriteBlinker rightBlinker;
        public SpriteBlinker frontBlinker;

        // Update is called once per frame
        void Update()
        {
            if(stringReceiver.string_val == "R")
            {
                rightBlinker.isBlinking = true;
                leftBlinker.isBlinking = false;
                frontBlinker.isBlinking = false;
            }
            else if (stringReceiver.string_val == "L")
            {
                rightBlinker.isBlinking = false;
                leftBlinker.isBlinking = true;
                frontBlinker.isBlinking = false;
            }
            else if (stringReceiver.string_val == "S")
            {
                rightBlinker.isBlinking = false;
                leftBlinker.isBlinking = false;
                frontBlinker.isBlinking = true;
            }
            else
            {
                rightBlinker.isBlinking = false;
                leftBlinker.isBlinking = false;
            }
        }
    }
}