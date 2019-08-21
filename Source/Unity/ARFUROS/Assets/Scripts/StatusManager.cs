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
    public GameObject Costmap;
    public GameObject LocalizationParticles;
    public GameObject FullPath;
    public GameObject Blinker;
    public GameObject Marker;
    private Subscriber[] scripts;

	// Use this for initialization
	void Awake () {
        statusText.text = "Initializing...";
        rosConnection.RosBridgeServerUrl = "ws://" + PlayerPrefs.GetString("IP", "192.168.1.1") + ":9090";

        // Initialize array for rosconnections
        scripts = new Subscriber[0];
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
        //addition of marker topic
        if (PlayerPrefs.GetInt("Marker", 1) == 1)
        {
            Marker.SetActive(true);
            rosSubscriber("/marker_publish/visualization_marker", true); //the first parameter is either this, or "/visualization_msgs/Marker"
        }
        else
        {
            Marker.SetActive(false);
            rosSubscriber("/marker_publish/visualization_marker", false);
        }


        if (PlayerPrefs.GetInt("LaserScan", 1) == 1)
        {
            laserScan.SetActive(true);
            rosSubscriber("/ARFUROS/LaserScan", true); 
        }
        else
        {
            laserScan.SetActive(false);
            rosSubscriber("/ARFUROS/LaserScan", false); 
        }

        if (PlayerPrefs.GetInt("GlobalPath", 1) == 1)
        {
            globalPlan.SetActive(true);
            rosSubscriber("/ARFUROS/Path", true); 
        }
        else
        {
            globalPlan.SetActive(false);
            rosSubscriber("/ARFUROS/Path", false); 
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

         if (PlayerPrefs.GetInt("Costmap", 1) == 1)
        {
            Costmap.SetActive(true);
            rosSubscriber("/ARFUROS/Costmap", true); 
        }
        else
        {
            Costmap.SetActive(false);
            rosSubscriber("/ARFUROS/Costmap", false); 
        }

         if (PlayerPrefs.GetInt("LocalizationParticles", 1) == 1)
        {
            LocalizationParticles.SetActive(true);
            rosSubscriber("/ARFUROS/Localization", true); 
        }
        else
        {
            LocalizationParticles.SetActive(false);
            rosSubscriber("/ARFUROS/Localization", false); 
        }

        if (PlayerPrefs.GetInt("FullPath", 1) == 1)
        {
            FullPath.SetActive(true);
            rosSubscriber("/ARFUROS/fullpath", true); 
        }
        else
        {
            FullPath.SetActive(false);
            rosSubscriber("/ARFUROS/fullpath", false); 
        }

        if (PlayerPrefs.GetInt("Blinker", 1) == 1)
        {
            Blinker.SetActive(true);
            rosSubscriber("/turn_signal", true); 
        }
        else
        {
            Blinker.SetActive(false);
            rosSubscriber("/turn_signal", false); 
        }
    }

    void rosSubscriber(string topic, bool status)
    {
          for (int i = 0; i < scripts.Length; i++)
            {
                if (scripts[i].Topic == topic)
                    scripts[i].enabled = status;
            }
    }
}
