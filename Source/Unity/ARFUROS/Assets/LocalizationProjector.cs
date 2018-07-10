using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class LocalizationProjector : MonoBehaviour {

	public PoseArrayReceiver message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles; 

	// Use this for initialization
	void Start () {
		mySystem = GetComponent<ParticleSystem> ();
	}
	
	// Update is called once per frame
	void Update () {

		if (message != null)
		{
			// Initialize variables 
			numParticles = message.poses.Length;

			Debug.Log("Localization Particles num particles: " + numParticles);

			particles = new ParticleSystem.Particle[numParticles];

			// Spawn 
			Display();
		}

	}

	void Display(){

		 // Set positions 

		// Reducing particle amount - FIX
		int count = 300;
		if (numParticles < count)
			count = numParticles;
		//////////////////////////////////
			
    		for (int i = 0; i < count; i++) 
        	{
        		if (i < message.poses.Length)
        		{
            		particles[i].position = new Vector3(message.poses[i].x , 
            			message.poses[i].y , 0f); 
        		

            		particles[i].startColor = Color.blue;
            		particles[i].startSize = 0.005f;
            	}
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}
}
