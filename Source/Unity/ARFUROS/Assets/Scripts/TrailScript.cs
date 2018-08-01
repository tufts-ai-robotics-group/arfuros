/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class TrailScript : MonoBehaviour {

	//public PathReceiver message;
	public GameObject GlobalProjector;

	private Vector3[] colorVector;

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

		colorVector = new Vector3[GlobalProjector.GetComponent<PathProjector>().colorVector.Length];
		Array.Copy(GlobalProjector.GetComponent<PathProjector>().colorVector, colorVector,
			GlobalProjector.GetComponent<PathProjector>().colorVector.Length);

		Debug.Log("LENGTHHHH: " + colorVector.Length);

		if (colorVector.Length > 0)
		{
			// Initialize variables 
			numParticles = colorVector.Length;
			particles = new ParticleSystem.Particle[colorVector.Length];

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

	// Changes colors of individual particles for loading effect 
	void Display() {

		for (int i = 0; i < numParticles; i++)
		{
			particles[i].position = new Vector3(colorVector[i].x, 
            	colorVector[i].y, 0f);
			particles[i].startColor = Color.white;
            particles[i].startSize = 0.15f;
    	}
			mySystem.SetParticles(particles, particles.Length);

	}

    
}*/