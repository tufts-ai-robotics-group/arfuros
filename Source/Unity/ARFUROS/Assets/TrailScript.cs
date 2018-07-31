using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class TrailScript : MonoBehaviour {

	public PathReceiver message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles; 

	private int colorCount = 0;
	private int colorUpdate = 0;
	private int UpdateCap = 10;

	private int ColorFreq = 5;
	private int currCount = 0;


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

			particles = new ParticleSystem.Particle[message.numPoints / ColorFreq];

			// Loading effect 
			if(numParticles > 0 && colorUpdate == 0)
			{
				Display();
			}
		}

		if (colorUpdate == UpdateCap)
			colorUpdate = 0;
		else
			colorUpdate++;

	}

	// Changes colors of indvidual particles for loading effect 
	void Display() {

		currCount = colorCount;
	for (int i = 0; i < message.numPoints / ColorFreq; i++)
	{
		if(currCount > (message.numPoints - 1)) // Loop back over array 
		{
			colorCount = 0;
		}

		if (currCount < message.numPoints)
		{
			particles[i].position = new Vector3(message.path[currCount].x, 
            			message.path[currCount].y, 0f);
			particles[i].startColor = Color.white;
            		particles[i].startSize = 0.15f;
        }

        currCount += ColorFreq;
    }
		mySystem.SetParticles(particles, particles.Length);
		colorCount++;


	}

    
}