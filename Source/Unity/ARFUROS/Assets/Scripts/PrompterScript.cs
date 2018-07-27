/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;
using System.Diagnostics;
using UnityEngine.UI;

public class PrompterScript : MonoBehaviour {

	// Need to do: 
	// add trigger functions to the following 
		// cross (on click)
		// all buttons (on click)
		// on up and down arrows (on click)
	// add game objects to script (after prompt error is fixed)
	// disable prompt when switching to menu scene 
	// fix onbtn function

	public Prompt message;
	public GameObject Prompter;

	public GameObject Warning;
	public Text WarningText;

	public GameObject Info;
	public Text InfoText;

	public GameObject Question;
	public Text QuestionText;
	public Button firstBtn;
	public Button secondBtn;
	public Button thirdBtn;
	public Button fourthBtn;
	public Image upArrow;
	public Image downArrow;
	private String[] options;
	private int optionIndex;
	private const int MAXBTN = 4;

	private int messageID;
	Stopwatch stopWatch;
	TimeSpan ts;
	// prompt message includes: prompt_id (int64), type (string), message (string) string[] (options), display_duration (float32)

	// Use this for initialization
	void Start () {

		ResetPrompter();
		stopWatch = new Stopwatch();

		if (message != null)
		{
			DisplayMessage();
		}
		else
		{
			Prompter.SetActive(false);
		}
	}
	
	// Update is called once per frame
	void Update () {

		if (message != null)
		{
			if (message.prompt_id == messageID)
			{
				ts = stopWatch.Elapsed;
				if (ts.Seconds > message.display_duration) // message timeout
					Prompter.SetActive(false);
			}
			else 
			{
				DisplayMessage();
			}
		}
		else 
		{
			Prompter.SetActive(false);
		}
	}

	void DisplayMessage ()
	{
		
		ResetPrompter();
		Prompter.SetActive(true);

		messageID = message.prompt_id;
		stopWatch.Restart();

		MessageType();
		
	}

	void ResetPrompter ()
	{
		Warning.SetActive(false);
		Info.SetActive(false);
		Question.SetActive(false);
	}

	void MessageType ()
	{
		if (message.type == "Warning")
			WarningActive();
		else if (message.type == "Info")
			InfoActive();
		else 
			QuestionActive();
	}

	void WarningActive()
	{
		WarningText.Text = message.message;
		Warning.SetActive(true);
	}
	void InfoActive()
	{
		InfoText.Text = message.message;
		Info.SetActive(true);
	}

	// *** Question Functions ***

	void QuestionActive ()
	{
		// Fill option array initially  
		for (int i = 0; i < MAXBTN; i++)
		{
			if (i < message.options.Length)
			{
				options[i] = message.options[i];
				optionIndex++;
			}
		}

		ButtonActive();
		QuestionText.Text = message.message;
		Question.SetActive(true);
	}

	void ResetButtons()
	{
		firstBtn.enable = false;
		secondBtn.enable = false;
		thirdBtn.enable = false;
		fourthBtn.enable = false;
	}

	void ButtonActive()
	{
		ResetButtons();

		// Down Arrow 
		if (message.options.Length > MAXBTN && (optionIndex < message.options.Length))
			downArrow.enable = true;
		else 
			downArrow.enable = false;

		// Up arrow 
		if (optionIndex > MAXBTN)
			upArrow.enable = true;
		else 
			upArrow.enable = false;

		// Buttons 
		if (options.Length >= 1)
		{
			firstBtn.enable = true;
			firstBtn.Text = options[0];
		}
		if (options.Length >= 2)
		{
			secondBtn.enable = true;
			secondBtn.Text = options[1];
		}
		if (options.Length >= 3)
		{
			thirdBtn.enable = true;
			thirdBtn.Text = options[2];
		}
		if (options.Length >= 4)
		{
			fourthBtn.enable = true;
			fourthBtn.Text = options[3];
		}
	}
	// *** Onclick trigger functions ***

	public void CrossOnClick()
	{
		Prompter.SetActive(false);
	}

	public void ButtonOnClick()
	{
		// send message to ros with info from btn
		Prompter.SetActive(false);
	}

	public void UpArrowOnClick()
	{
		int count = 0;
		while(optionIndex > 0 && count < 5)
		{
			optionIndex--;
			options[MAXBTN - count] = message.options[optionIndex];
			count++;
		}

		ButtonActive();
	}

	public void DownArrowOnClick()
	{
		int count = 0;
		while(optionIndex < message.options)
		{
			optionIndex++;
			options[count] = message.options[optionIndex];
			count++;
		}

		ButtonActive();
	}

}*/
