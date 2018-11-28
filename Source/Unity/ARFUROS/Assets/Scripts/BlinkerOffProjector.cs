using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

/****** EXAMPLE OF HOW TO RETRIEVE PARTICLE SYSTEM AND SCRIPT ******/
public class BlinkerOffProjector : MonoBehaviour {

    /* Variables for on/off switch */ 
    //public bool right_on;
    //public bool left_on;
    //public bool stop = false;

    /* Variables for blinker positions */
    public float x_left = -0.1f;
    public float y_left = 0.22f;
    public float z_left = -0.4f;
    public float x_right = -0.1f;
    public float y_right = -0.22f;
    public float z_right = -0.4f;
    public float initial_size = 0.1f;

    /* Particles system variables */
    private ParticleSystem mySystem;
    private ParticleSystem.Particle[] particles;
    private int numParticles = 2; 

    /* Getting other particle system */
    // public ParticleSystem ps;
    // BlinkerProjector blinker;

    // Use this for initialization
    void Start () {
        //blinker= ps.GetComponent<BlinkerProjector>();
        mySystem = GetComponent<ParticleSystem>();
    }
    
    // Update is called once per frame
    void Update () {
            particles = new ParticleSystem.Particle[numParticles];
            //left_on = blinker.left_on;
            //right_on = blinker.right_on;
            // Spawn 
            Display();
    }

    void Display(){
         // Set position for left blinker 
            particles[0].position = new Vector3(x_left, y_left, z_left);
            particles[0].startColor = Color.white;
            particles[0].startSize = initial_size;

        // Set position for right blinker 
            particles[1].position = new Vector3(x_right, y_right, z_right);
            particles[1].startColor = Color.white;
            particles[1].startSize = initial_size;
        // Set particles 
            mySystem.SetParticles(particles, particles.Length);
    }

}