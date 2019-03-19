using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using RosSharp.RosBridgeClient;

public class PromptManager : MonoBehaviour {

    public Text messageText;
    public Button buttonA;
    public Button buttonB;
    public GameObject PromptCanvas;

    public PromptMessage inMessage = new PromptMessage();
    public PromptFeedbackMessage outMessage = new PromptFeedbackMessage();

    public bool newPrompt = false;
    public bool onGoing = false;
    public float startTime = 0;

	// Update is called once per frame
	void Update () {
        if (newPrompt)
        {
            PromptCanvas.SetActive(true);
            messageText.text = inMessage.text;

            newPrompt = false;
            onGoing = true;

            if (inMessage.options.Length == 2)
            {
                buttonA.GetComponentInChildren<Text>().text = inMessage.options[0];
                buttonB.GetComponentInChildren<Text>().text = inMessage.options[1];
            }
        }

        if(inMessage.text == "")
        {
            done();
        }

        if (onGoing) { 
             if (startTime - Time.time > inMessage.display_duration)
             {
                outMessage.timeout = true;
                done();
             }
        }
        else
        {
            done();
        }

	}

    public void buttonACallback()
    {
        outMessage.selected_option = inMessage.options[0];
        done();
    }

    public void buttonBCallback()
    {
        outMessage.selected_option = inMessage.options[1];
        done();
    }

    void done()
    {
        onGoing = false;
        PromptCanvas.SetActive(false);
    }
}
