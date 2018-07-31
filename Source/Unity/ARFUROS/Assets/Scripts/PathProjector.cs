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
	private int colorCountT = 0;
	private int colorUpdate = 0;
	private int UpdateCap = 5;

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
			//Debug.Log("Global Path: num particles: " + numParticles);

			particles = new ParticleSystem.Particle[numParticles];

			// Spawn 
			Display();
			colorCountT = message.numPoints / 2;
			// Loading effect 
			if(numParticles > 0)
			{
				if (colorUpdate == 0)
				{
					ColorChanger();
				}
				if (colorUpdate == 3)
				{
					ColorChanger();
				}
			
			}
		}

		if (colorUpdate == UpdateCap)
			colorUpdate = 0;
		else
			colorUpdate++;

	}

	void Display(){

		 // Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
        		if (i < message.numPoints)
        		{
            		particles[i].position = new Vector3(message.path[i].x, 
            			message.path[i].y, 0f); // changed from message.path[i].z

            		particles[i].startColor = Color.yellow;
            		particles[i].startSize = 0.06f;
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
			particles[message.numPoints - 1].startColor = Color.yellow;
			particles[message.numPoints - 1].startSize = 0.06f;
		}
		else 
		{
			particles[colorCount - 1].startColor = Color.yellow;
			particles[colorCount - 1].startSize = 0.06f;
		}
		
		particles[colorCount].startColor = Color.white;
		particles[colorCount].startSize = 0.13f;
		mySystem.SetParticles(particles, particles.Length);
		colorCount++;

	}

    
}