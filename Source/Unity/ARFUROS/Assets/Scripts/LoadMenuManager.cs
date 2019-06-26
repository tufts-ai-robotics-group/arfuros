using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Overview: gathers the data from the user and loads either the arview scene 
//          with a previously saved configuration, or the menu scene for a new
//          configuration 

public class LoadMenuManager : MonoBehaviour {

    public InputField FileName;
    public Toggle NewConfig;
    public Toggle LoadConfig;
    public GameObject popupWindow; 

    // Gets the information from the user through the text inputs or toggles
    public void updateFileName(string newstring)
    {
        PlayerPrefs.SetString("FileName", newstring);
    }

    public void updateNewConfig(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("NewConfig", val);
    }

    public void updateLoadConfig(bool newbool)
    {
        int val = newbool ? 1 : 0;
        PlayerPrefs.SetInt("LoadConfig", val);
    }

    // Called when the Apply button is pushed
    // Turns off the popup window so not to confuse the user with an old message
    // If NewConfig is selected, resets the preferences and loads the menu
    // If LoadConfig is selected, calls the LoadGame function
    public void onApply()
    {
        popupWindow.SetActive(false);

        if (NewConfig.isOn)
        {
            Debug.Log("loading Menu scene");
            clearPreferences(); 
            SceneManager.LoadScene("menu");
        }
        else
        {
            Debug.Log("loading previous configuration"); 
            LoadGame(); 
        }
    }

    // Called as the scene is opened
    // Sets the default values of the toggles and input field
    public void Awake()
    {
        FileName.text = PlayerPrefs.GetString("File Name", "Enter file name here");

        if (PlayerPrefs.GetInt("NewConfig", 1) == 1)
            NewConfig.isOn = true;
        else
            NewConfig.isOn = false;

        if (PlayerPrefs.GetInt("LoadConfig", 1) == 1)
            LoadConfig.isOn = true;
        else
            LoadConfig.isOn = false; 

    }

    // Resets all the preferences to 1 (the default) 
    public void clearPreferences()
    {
        PlayerPrefs.SetString("IP", "192.168.1.1");
        PlayerPrefs.SetInt("LaserScan", 1);
        PlayerPrefs.SetInt("GlobalPath", 1);
        PlayerPrefs.SetInt("PeopleTracking", 1);
        PlayerPrefs.SetInt("Costmap", 1);
        PlayerPrefs.SetInt("LocalizationParticles", 1);
        PlayerPrefs.SetInt("FullPath", 1);
        PlayerPrefs.SetInt("Blinker", 1);
    }

    // Loads the previous configuration that matches the file name given, if it exists
    // If the file does not exist, it tells the user and waits for another file
    // If the file does exist, it uses FileStream to convert the saved binary file
    //      into a Save object and resets all the preferences to the attributes of
    //      the Save object
    // Then it tells the user that the configuration is loading and loads the arview
    public void LoadGame()
    {
        string Fname = "/" + FileName.text + ".save";
        if (File.Exists(Application.persistentDataPath + Fname))
        {
            // Get file and open it
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + Fname, FileMode.Open);
            Save save = (Save)bf.Deserialize(file);
            file.Close();

            // Update preferences
            PlayerPrefs.SetString("IP", save.IPaddress);
            PlayerPrefs.SetInt("LaserScan", save.LaserScan);
            PlayerPrefs.SetInt("GlobalPath", save.GlobalPath);
            PlayerPrefs.SetInt("PeopleTracking", save.PeopleTracking);
            PlayerPrefs.SetInt("Costmap", save.Costmap);
            PlayerPrefs.SetInt("LocalizationParticles", save.LocalizationParticles);
            PlayerPrefs.SetInt("FullPath", save.FullPath);
            PlayerPrefs.SetInt("Blinker", save.Blinker); 

            Debug.Log("Configuration Loaded");

            // Change text message
            Text message = popupWindow.GetComponentInChildren<Text>(); 
            message.text = "Loading your configuration...";
            popupWindow.SetActive(true); 

            // Load scene
            SceneManager.LoadScene("arview");
        }
        else
        {
            popupWindow.SetActive(true); 
            Debug.Log("No configuration saved!");

        }
    }
}

