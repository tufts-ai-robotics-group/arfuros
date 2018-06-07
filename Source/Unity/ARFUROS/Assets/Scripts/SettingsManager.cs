using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsManager : MonoBehaviour {

    public InputField IPAddress;
    public Toggle LaserScan;
    public Toggle Path;

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

    public void onApply()
    {
        SceneManager.LoadScene("arview");
    }

    public void Awake()
    {
        // Load in the values
        // if items in player pref are not null, set values

        if (PlayerPrefs.GetString("IP") != "")
        {
            IPAddress.text = PlayerPrefs.GetString("IP");
        }
        
        if (PlayerPrefs.GetInt("LaserScan") == 1)
            LaserScan.isOn = true;
        else 
        	LaserScan.isOn = false;


        if (PlayerPrefs.GetInt("Path") == 1)
            Path.isOn = true;
        else 
        	Path.isOn = false;
    }
}

