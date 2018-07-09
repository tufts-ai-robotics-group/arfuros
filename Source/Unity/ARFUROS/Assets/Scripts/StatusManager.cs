using RosSharp.RosBridgeClient;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;


public class StatusManager : MonoBehaviour {

    public Text statusText;
    public HyperCubeTrackableEventHandler TrackerCube;
    public RosConnector rosConnection;
    public GameObject laserScan;
    public GameObject globalPlan;
    public GameObject people;
    public GameObject connector;
    public int numTopics = 3;
    private Subscriber[] scripts;

	// Use this for initialization
	void Awake () {
        statusText.text = "Initializing...";
        rosConnection.RosBridgeServerUrl = "ws://" + PlayerPrefs.GetString("IP", "192.168.1.1") + ":9090";

        // Initialize array for rosconnections
        scripts = new Subscriber[numTopics];
        scripts = connector.GetComponents<Subscriber>();


    }

    // Update is called once per frame
    void Update () {
        checkTracker();
        //controlExtendedTracking();
        implementPreferences();
	}

    void displayStatus (string message)
    {
        statusText.text = message;
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
        {
            laserScan.SetActive(true);
            rosSubscriber("/scan_filtered", true); 
        }
        else
        {
            laserScan.SetActive(false);
            rosSubscriber("/scan_filtered", false); 
        }

        if (PlayerPrefs.GetInt("Path", 1) == 1)
        {
            globalPlan.SetActive(true);
            rosSubscriber("/path_relative", true); 
        }
        else
        {
            globalPlan.SetActive(false);
            rosSubscriber("/path_relative", false); 
        }

        if (PlayerPrefs.GetInt("PeopleTracking", 1) == 1)
        {
            people.SetActive(true); 
            rosSubscriber("/people_tracker_measurements", true); 
        }
        else 
        {
            people.SetActive(false);
            rosSubscriber("/people_tracker_measurements", false);      
        }
    }

    void rosSubscriber(string topic, bool status)
    {
          for (int i = 0; i < numTopics; i++)
            {
                if (scripts[i].Topic == topic)
                    scripts[i].enabled = status;
            }
    }
}
