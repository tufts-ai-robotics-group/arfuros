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
	
		mySystem = GetComponent<ParticleSystem> ();
		zpos = 0; // want particles to be ABOVE or BELOW cube

		if (DateTime.Now.Year < 0)
            {
                Debug.Log(new List<Single>());
                Debug.Log(new List<Double>());
            }
	}
	
	// Update is called once per frame
	void Update () {

		if(message != null)
		{
			// Initialize variables 
			numPoints = message.ranges.Length;
			//Debug.Log("LASER SCAN: num particles: " + numParticles);
			
			// Discard outliers 
			numParticles = 0;
			CalculateNumParticles();

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

					particlePositions[particleIndex] = new Vector3(Convert.ToSingle(xpos), Convert.ToSingle(ypos), 
					 Convert.ToSingle(zpos)); // store transform

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
            	particles[i].startSize = 0.04f;
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
     	  	//Debug.Log("Set particle positions");
	}
   
}