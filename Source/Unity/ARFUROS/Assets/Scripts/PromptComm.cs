using RosSharp.RosBridgeClient;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PromptComm : MonoBehaviour {

    public PromptManager manager;
    public PromptReceiver input;

    int last_id = -1;
    bool waiting = false;

	// Update is called once per frame
	void Update () {
		if(input.message.prompt_id > last_id)
        {
            manager.newPrompt = true;
            manager.inMessage = input.message;
            last_id = input.message.prompt_id;
            waiting = true;
        }

        if (waiting)
        {
            if (manager.onGoing)
            {
                // Tell we are waiting
            }
            else
            {
                // Publish outMessage
            }
        }

	}
}
