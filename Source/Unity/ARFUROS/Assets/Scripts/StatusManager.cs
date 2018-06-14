﻿using RosSharp.RosBridgeClient;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;


public class StatusManager : MonoBehaviour {

    public Text statusText;
    public HyperCubeTrackableEventHandler TrackerCube;
    public MultiTargetBehaviour TrackerCubeBehaviour;
    public RosConnector rosConnection;
    public LaserScanReceiver laserScan;
    public PathReceiver localPlan;
    public PathReceiver globalPlan;

	// Use this for initialization
	void Awake () {
        statusText.text = "Initializing...";
        rosConnection.RosBridgeServerUrl = "ws://" + PlayerPrefs.GetString("IP", "192.168.1.1") + ":9090";
    }

    // Update is called once per frame
    void Update () {
        checkTracker();
        controlExtendedTracking();
        implementPreferences();
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

    void implementPreferences()
    {
        if (PlayerPrefs.GetInt("LaserScan", 1) == 1)
            laserScan.enabled = true;
        else
            laserScan.enabled = false;

        if (PlayerPrefs.GetInt("Path", 1) == 1)
        {
            localPlan.enabled = true;
            globalPlan.enabled = true;
        }
        else
        {
            localPlan.enabled = false;
            globalPlan.enabled = false;
        }

    }
}
