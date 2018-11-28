using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class BlinkerProjector : MonoBehaviour {
    /* Recieve Message */
    public BlinkerReceiver message;
    public PathReceiver fullpath_message;
    public PathReceiver path_message;

    /* Set message parameters */
    public string path = "fullpath";
    public uint numpoints_thresh = 5;
    public uint outlook_thresh = 10;
    public float deviation_thresh = 0.1f;

    /* Variables for on/off switch */ 
    public bool right_on = true;
    public bool left_on = true;
    public bool stop = false;

    /* Variables for blinker positions */
    public float x_left = -0.1f;
    public float y_left = 0.22f;
    public float z_left = -0.4f;
    public float x_right = -0.1f;
    public float y_right = -0.22f;
    public float z_right = -0.4f;
    public float initial_size = 0.1f;
    public float blinking_size = 0.1f;

    /* Particles system variables */
    private ParticleSystem mySystem;
    private ParticleSystem.Particle[] particles;
    private int numParticles = 2; 

    /* Rate of blinking */
    private const int RATE = 3;
    int count = 0;

    // Variables for loading effect 
    private int colorCount = 0;
    private int colorCount2 = 0;
    private const int MINC = 10;
    private const int MAXC = 20;


    // Use this for initialization
    void Start () {
        mySystem = GetComponent<ParticleSystem> ();
    }
    
    // Update is called once per frame
    void Update () {

        /* Blinking freq depends on rate, the higher it is, the slower the blinking rate */
        particles = new ParticleSystem.Particle[numParticles];
        if (count < RATE) {
            updateBlinker(); /* Gather information from path */
            Display();
            count++;
        }
        else if (count < (RATE + RATE))
        {
            mySystem.Clear();
            count++;
        }
        else
             count = 0;
    }

    /* Looks at path to update if blinkers are on or off */
    void updateBlinker (){

         // DEBUGGING - Setting parameters manually 
         // message.path = path;
         // message.outlook_thresh = outlook_thresh;
         // message.deviation_thresh = deviation_thresh;
         // message.numpoints_thresh = numpoints_thresh;

        int outliers_right = 0, outliers_left = 0;
        right_on = false;
        left_on = false;
        /* Get desired path message */
        if(message.path == "fullpath" || message.path == "FullPath"){
            if(fullpath_message.numPoints > 0){
                for (int i = 0; i < message.outlook_thresh; i++){
                        // Debug.Log("The x point");
                        // Debug.Log(fullpath_message.path[i].x);
                        // Debug.Log("The y point");
                        // Debug.Log(fullpath_message.path[i].y);
                        // Debug.Log("The z point");
                        //Debug.Log(fullpath_message.path[i].z);
                        if (fullpath_message.path[i].x > message.deviation_thresh)
                                outliers_left++;
                        else if(fullpath_message.path[i].x < (-1 * message.deviation_thresh)) 
                                outliers_right++;
                }
            }
        }

        else if(message.path == "globalpath" || message.path == "GlobalPath"){
            if(path_message.numPoints > 0){
                for (int i = 0; i < message.outlook_thresh; i++){
                        if (path_message.path[i].x > message.deviation_thresh)
                                outliers_left++;
                        else if(path_message.path[i].x < (-1 * message.deviation_thresh))
                                outliers_right++;
                }
            }
        }

        /* Debugging */
        //Debug.Log("Number of right outliers: ");
        //Debug.Log(outliers_right);
        //Debug.Log("\nNumber of left outliers: ");
        //Debug.Log(outliers_left);

        if(outliers_right > message.numpoints_thresh)
            right_on = true;
                
        if(outliers_left > message.numpoints_thresh)
            left_on = true;  
    }

    void Display(){

         // Set position for left blinker
         if(left_on){
            particles[0].position = new Vector3(x_left, y_left, z_left);
            particles[0].startColor = Color.yellow;
            particles[0].startSize = initial_size;
        }

        // Set position for right blinker 
        if(right_on){
            particles[1].position = new Vector3(x_right, y_right, z_right);
            particles[1].startColor = Color.yellow;
            particles[1].startSize = initial_size;
        }

        // Set particles 
        mySystem.SetParticles(particles, particles.Length);
    }


    // Changes colors of indvidual particles for loading effect 
    void ColorChanger (){

        /* Change colors for blinkers that are on */ 

        if (left_on){
            if (colorCount < MINC){
                // Set initial color to yellow 
                particles[0].startColor = Color.white;
                particles[0].startSize = initial_size;
                colorCount++;
                //Debug.Log("In left blinker, 0 ");
            }

            else if (colorCount < MAXC) {
                // Set secondary color to white
                particles[0].startColor = Color.yellow;
                particles[0].startSize = blinking_size;
                colorCount++;
                //Debug.Log("In left blinker, count not 0 ");
            }
            else 
                colorCount = 0;
        }

        if (right_on){
            if (colorCount2 < MINC){
                // Set initial color to yellow 
                particles[1].startColor = Color.white;
                particles[1].startSize = initial_size;
                colorCount2++;
                //Debug.Log("In right blinker, 0");
            }

            else if (colorCount2 < MAXC) {
                // Set secondary color to white
                particles[1].startColor = Color.yellow;
                particles[1].startSize = blinking_size;
                colorCount2++;
                //Debug.Log("In right blinker, count not 0 ");
            }
            else 
                colorCount2 = 0;
        }

        mySystem.SetParticles(particles, particles.Length);
    }
}
