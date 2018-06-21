using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;


public class LaserScanProjector : MonoBehaviour {

	public LaserScanReceiver message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private Vector3[] particlePositions;
	private int numPoints;
	private int numParticles; 
	private float zpos;

	// Use this for initialization
	void Start () {
		Debug.Log("GOT TO LASER SCAN START");
		mySystem = GetComponent<ParticleSystem> ();
		zpos = 0; // want particles to be ABOVE or BELOW cube
	}
	
	// Update is called once per frame
	void Update () {

		Debug.Log("LASER UPDATE");
		Debug.Log("Message " + message);

		if(message != null)
		{
			Debug.Log("LASER SCAN RECIEVED A MESSAGE");

			// Initialize variables 
			numPoints = message.ranges.Length;
			Debug.Log("Number of points: " + numPoints);

			// Discard outliers 
			numParticles = 0;
			CalculateNumParticles();
			Debug.Log("Number of particles " + numParticles);

			particles = new ParticleSystem.Particle[numParticles];
			particlePositions = new Vector3[numParticles]; 

			// Spawn 
			Transform();
			Display();
		}
	}

	void CalculateNumParticles()
	{
		for (int i = 0; i < numPoints; i++)
		{
			if (message.ranges[i] > message.range_min && message.ranges[i] < message.range_max) 
			{
				numParticles++;
			}
		}

	}
	void Transform (){

		if (message != null)
		{

			double xpos, ypos, currAngle = message.angle_min;
			int particleIndex = 0;

			for (int i = 0; i < numPoints; i++)
			{
				if (message.ranges[i] > message.range_min && message.ranges[i] < message.range_max && particleIndex < numParticles) // Discard outliers 
				{
					// Polar to cartesian 
					// Discard min range/ max range 
					xpos = Math.Cos(currAngle) * message.ranges[i];
					ypos = Math.Sin(currAngle) * message.ranges[i];

					particlePositions[particleIndex] = new Vector3(Convert.ToSingle(xpos), 
						Convert.ToSingle(ypos), Convert.ToSingle(zpos)); // store transform

					particleIndex++;
				}

				currAngle += message.angle_increment; // update angle 

			}
		}

	}

	void Display(){

		 // Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
            	particles[i].position = particlePositions[i];
            	particles[i].startColor = Color.red;
            	particles[i].startSize = 0.3f;
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
     	  	Debug.Log("Set particle positions");
	}
   
}