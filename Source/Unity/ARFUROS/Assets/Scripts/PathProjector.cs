using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class PathProjector : MonoBehaviour {

	public PathReceiver message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles; 

	// Variables for loading effect 
	private int colorCount = 0;

	// Use this for initialization
	void Start () {
		mySystem = GetComponent<ParticleSystem> ();
	}
	
	// Update is called once per frame
	void Update () {

		if (message != null)
		{
			// Initialize variables 
			numParticles = message.numPoints;

			particles = new ParticleSystem.Particle[numParticles];

			// Spawn 
			Display();
			// Loading effect 
			if(numParticles > 0)
				ColorChanger();
		}

	}

	void Display(){

		 // Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
        		if (i < message.numPoints)
        		{
            		particles[i].position = new Vector3(message.path[i].x, 
            			message.path[i].y, 0f); // changed from message.path[i].z

            		particles[i].startColor = Color.green;
            		particles[i].startSize = 0.1f;
            	}
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}

	// Changes colors of indvidual particles for loading effect 
	void ColorChanger (){

		if(colorCount > (message.numPoints - 1)) // Loop back over array 
		{
			colorCount = 0;
		}

		if (colorCount == 0)
		{
			particles[message.numPoints - 1].startColor = Color.green;
			particles[message.numPoints - 1].startSize = 1f;
		}
		else 
		{
			particles[colorCount - 1].startColor = Color.green;
			particles[colorCount - 1].startSize = 1f;
		}
		
		particles[colorCount].startColor = Color.white;
		particles[colorCount].startSize = 2f;
		mySystem.SetParticles(particles, particles.Length);
		colorCount++;
	}

    
}