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
	public float rotation = 0f;
	public float size = 0.04f;

	// Use this for initialization
	void Start () {
		mySystem = GetComponent<ParticleSystem> ();
		if (DateTime.Now.Year < 0)
            {
                Debug.Log(new List<SByte>());
            }
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

		// Adjusting particle size based on count 
		int count = 1000;
		
		/*if (numParticles < count)
			size = 0.03f; 
		else 
			size = 0.02f; */

		// Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
        		if (i < message.poses.Length)
        		{
            		particles[i].position = new Vector3(message.poses[i].x , 
            			message.poses[i].y , 0f); 
        		

            		particles[i].startColor = Color.magenta;
            		particles[i].startSize = size;
            		particles[i].rotation = rotation; // rotation is in degrees 
            	}
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}
}
