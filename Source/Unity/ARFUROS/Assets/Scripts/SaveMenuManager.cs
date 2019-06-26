using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// Overview: either quits the game or saves the current player preferences into
//          a specified file and then quits the game

public class SaveMenuManager : MonoBehaviour
{
    public InputField FileName;

    // Gets the desired file name from the user
    public void updateFileName(string newstring)
    {
        PlayerPrefs.SetString("FileName", newstring);
    }

    // Sets up the input field when the scene loads
    public void Awake()
    {
        FileName.text = PlayerPrefs.GetString("File Name", "Please enter file name");
    }

    // Called when the Save and Quit button is pressed
    // Calls the SaveGame function, then quits
    public void onSave()
    {
        SaveGame();
        Application.Quit();  
    }

    // Called when the Quit button is pressed
    // Just quits
    public void onQuit()
    {
        Application.Quit(); 
    }

    // Calls CreateSaveGameObject to save the current preferences 
    // Puts the Save object in a binary file and saves it under the given name
    public void SaveGame()
    {
        Save save = CreateSaveGameObject();

        BinaryFormatter bf = new BinaryFormatter();
        string Fname = "/" + FileName.text + ".save";
        FileStream file = File.Create(Application.persistentDataPath + Fname);
        bf.Serialize(file, save);
        file.Close();

        Debug.Log("Game Saved");
    }

    // Creates a new Save object 
    // Takes the current preference data and puts it in the attributes of the 
    //      Save object and then returns it
    // If a toggle is not specified, the default is off 
    private Save CreateSaveGameObject()
    {
        Save save = new Save();

        // Save all the current data from the PlayerPrefs 
        save.IPaddress = PlayerPrefs.GetString("IP", "192.168.1.1");
        save.LaserScan = PlayerPrefs.GetInt("LaserScan", 0);
        save.GlobalPath = PlayerPrefs.GetInt("GlobalPath", 0);
        save.PeopleTracking = PlayerPrefs.GetInt("PeopleTracking", 0);
        save.Costmap = PlayerPrefs.GetInt("Costmap", 0);
        save.LocalizationParticles = PlayerPrefs.GetInt("LocalizationParticles", 0);
        save.FullPath = PlayerPrefs.GetInt("FullPath", 0);
        save.Blinker = PlayerPrefs.GetInt("Blinker", 0); 

        return save;
    }
}