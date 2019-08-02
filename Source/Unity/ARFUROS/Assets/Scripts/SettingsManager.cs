using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsManager : MonoBehaviour {

    public InputField IPAddress;
    public Toggle LaserScan;
    public Toggle GlobalPath;
    public Toggle PeopleTracking;
    public Toggle Costmap;
    public Toggle LocalizationParticles;
    public Toggle FullPath;
    public Toggle Blinker;

    public Toggle Marker;

    public void updateMarker(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("marker", val);
    }

    public void updateIP(string newstring)
    {
        PlayerPrefs.SetString("IP", newstring);
    }

    public void updateLaserScan(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("LaserScan", val);
    }

    public void updateGlobalPath(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("GlobalPath", val);
    }

    public void updatePeopleTracking(bool newbool) {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("PeopleTracking", val);
    }

    public void updateCostmap(bool newbool) {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("Costmap", val);
    }

     public void updateLocalizationParticles(bool newbool) {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("LocalizationParticles", val);
    }

    public void updateFullPath(bool newbool) {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("FullPath", val);
    }
    public void updateBlinker(bool newbool) {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("Blinker", val);
    }

    public void onApply()
    {
        SceneManager.LoadScene("arview");
    }

    public void Awake()
    {
        // Load in the values
        // if keys in player pref are not present, set default values
        IPAddress.text = PlayerPrefs.GetString("IP", "192.168.1.1");


        if (PlayerPrefs.GetInt("marker", 1) == 1)
            Marker.isOn = true;
        else
            Marker.isOn = false;



        if (PlayerPrefs.GetInt("LaserScan", 1) == 1)
            LaserScan.isOn = true ;
        else 
        	LaserScan.isOn = false;

        if (PlayerPrefs.GetInt("GlobalPath", 1) == 1)
            GlobalPath.isOn = true;
        else 
        	GlobalPath.isOn = false;

        if (PlayerPrefs.GetInt("PeopleTracking", 1) == 1)
            PeopleTracking.isOn = true;
        else
            PeopleTracking.isOn = false;

        if (PlayerPrefs.GetInt("Costmap", 1) == 1)
            Costmap.isOn = true ;
        else 
            Costmap.isOn = false;

        if (PlayerPrefs.GetInt("LocalizationParticles", 1) == 1)
            LocalizationParticles.isOn = true ;
        else 
            LocalizationParticles.isOn = false;
            
        if (PlayerPrefs.GetInt("FullPath", 1) == 1)
            FullPath.isOn = true ;
        else 
            FullPath.isOn = false;

        if (PlayerPrefs.GetInt("Blinker", 1) == 1)
            Blinker.isOn = true ;
        else 
            Blinker.isOn = false;
    }
}

