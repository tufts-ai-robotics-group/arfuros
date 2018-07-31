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
            		particles[i].startSize = 0.06f;
            	}
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}

	/*// Changes colors of indvidual particles for loading effect 
	void ColorChanger (){

		if(colorCount > (message.numPoints - 1)) // Loop back over array 
		{
			colorCount = 0;
		}

		if (colorCount == 0)
		{
			particles[message.numPoints - 1].startColor = Color.green;
			particles[message.numPoints - 1].startSize = 0.06f;
		}
		else 
		{
			particles[colorCount - 1].startColor = Color.green;
			particles[colorCount - 1].startSize = 0.06f;
		}
		
		particles[colorCount].startColor = Color.white;
		particles[colorCount].startSize = 0.1f;
		mySystem.SetParticles(particles, particles.Length);
		colorCount++;
	}*/

    
}