using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsManager : MonoBehaviour {

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

    private void Awake()
    {
       // Load in the values
    }

}

