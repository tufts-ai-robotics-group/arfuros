using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;


public class StatusManager : MonoBehaviour {

    public Text statusText;
    public HyperCubeTrackableEventHandler TrackerCube;
    public MultiTargetBehaviour TrackerCubeBehaviour;


	// Use this for initialization
	void Start () {
        statusText.text = "Initializing...";
    }

    // Update is called once per frame
    void Update () {
        checkTracker();
        controlExtendedTracking();
	}

    void displayStatus (string message)
    {
        statusText.text = message;
    }

    void controlExtendedTracking()
    {
        if (TrackerCubeBehaviour.MultiTarget == null)
            return;

        if (PlayerPrefs.GetInt("ExtendedTracking") == 1)
            TrackerCubeBehaviour.MultiTarget.StartExtendedTracking();
        else
            TrackerCubeBehaviour.MultiTarget.StopExtendedTracking();
    }

    void checkTracker()
    {
        if (TrackerCube.isTracked) {
            if (TrackerCube.isExtended)
                displayStatus("HyperCube Lost, Extrapolating...");
            else
                displayStatus("HyperCube Detected");
        }
        else
        {
            displayStatus("HyperCube Not Found");
        }
    }
}
