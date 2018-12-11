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
	//public Vector3[] colorVector;
	//private int colorPoints;
	private int colorCount = 0;
	//private int ColorFreq = 9;
	//private int currCount = 0;

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
            			message.path[i].y, message.path[i].z);

            		particles[i].startColor = Color.yellow;
            		particles[i].startSize = 0.06f;
            	}
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}

	// Changes colors of for trail particle component 
	/*void ColorChanger() {

		currCount = colorCount; 
		for (int i = 0; i < colorPoints; i++)
		{
			if(currCount > (message.numPoints - 1)) // Loop back over array 
			{
				currCount = 0;
			}

			if (currCount < message.numPoints)
			{
				colorVector[i] = new Vector3(message.path[currCount].x, 
            			message.path[currCount].y, 0f);
        	}

        	currCount += ColorFreq;
    	}

    	if (colorCount > message.numPoints - 1)
    		colorCount = 0;
    	else
    		colorCount++;

    	Debug.Log("FROM path projector length: " + colorVector.Length);

	}*/

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