using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;


public class LaserScanProjector : MonoBehaviour {

	public LaserScanReceiver receiver;
	private LaserScan message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private Vector3[] particlePositions;
	private int numParticles; 
	private float zpos;

	// Use this for initialization
	void Start () {
		Debug.Log("Got to laser scan start");
		mySystem = GetComponent<ParticleSystem> ();
		zpos = 0;
	}
	
	// Update is called once per frame
	void Update () {

		Debug.Log("Got to laser scan update");
		message = receiver.message; 
		Debug.Log("The message: " + message);

		if(message != null)
		{
			// Intialize variables 
			numParticles = message.ranges.Length;
			Debug.Log("Number of particles: " + numParticles);


			particles = new ParticleSystem.Particle[numParticles];
			particlePositions = new Vector3[numParticles]; 

			// Spawn 
			Transform();
			Display();
		}
	}

	void Transform (){

		if (message != null)
		{

			double xpos, ypos, currAngle = message.angle_min;

			for (int i = 0; i < numParticles; i++)
			{
				// Polar to cartesian 
				// Discard min range/ max range 
				xpos = Math.Cos(currAngle) * message.ranges[i];
				ypos = Math.Sin(currAngle) * message.ranges[i];

				particlePositions[i] = new Vector3(Convert.ToSingle(xpos), 
					Convert.ToSingle(ypos), Convert.ToSingle(zpos)); // store transform

				currAngle += message.angle_increment; // update angle 
			}
		}

	}

	void Display(){
		Debug.Log("Got to laser scan display");
		 // Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
            	particles[i].position = particlePositions[i];
            	particles[i].startColor = Color.red;
            	particles[i].startSize = 1f;
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}

}