using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsManager : MonoBehaviour {

    public InputField IPAddress;
    public Toggle LaserScan;
    public Toggle Path;
    public Toggle PeopleTracking;
    public Toggle Costmap;
    public Toggle LocalizationParticles;

	public void updateIP(string newstring)
    {
        PlayerPrefs.SetString("IP", newstring);
    }

    public void updateLaserScan(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("LaserScan", val);
    }

    public void updatePath(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("Path", val);
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

    public void onApply()
    {
        SceneManager.LoadScene("arview");
    }

    public void OnQuit()
    {
        Application.Quit();
    }
    public void Awake()
    {
        // Load in the values
        // if keys in player pref are not present, set default values
        IPAddress.text = PlayerPrefs.GetString("IP", "192.168.1.1");
        
        if (PlayerPrefs.GetInt("LaserScan", 1) == 1)
            LaserScan.isOn = true ;
        else 
        	LaserScan.isOn = false;


        if (PlayerPrefs.GetInt("Path", 1) == 1)
            Path.isOn = true;
        else 
        	Path.isOn = false;

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
    }
}

