using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class Save
{
    public string IPaddress;
    public int LaserScan;
    public int GlobalPath;
    public int PeopleTracking;
    public int Costmap;
    public int LocalizationParticles;
    public int FullPath;
    public int Blinker;   

    // QUESTION: DO YOU ALWAYS HAVE TO HARD CODE IT OR CAN I TAKE A "SCREENSHOT" OF IT?
}
