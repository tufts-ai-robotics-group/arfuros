using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class PathProjector : MonoBehaviour {

	public PathReceiver receiver;
	private NavPath message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles; 

	// Use this for initialization
	void Start () {

		mySystem = GetComponent<ParticleSystem> ();
	}
	
	// Update is called once per frame
	void Update () {

		message = receiver.message; 
		if (message != null)
		{
			// Intialize variables 
			numParticles = message.poses.Length;

			particles = new ParticleSystem.Particle[numParticles];

			// Spawn 
			Display();
		}

	}

	void Display(){

		 // Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
            	particles[i].position = new Vector3(message.poses[i].pose.position.x, 
            		message.poses[i].pose.position.y, message.poses[i].pose.position.z);

            	particles[i].startColor = Color.red;
            	particles[i].startSize = 1f;
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}

}