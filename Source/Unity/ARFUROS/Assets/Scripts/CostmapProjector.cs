using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class CostmapProjector : MonoBehaviour {

	public OccupancyGridReceiver message;

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles; 
	private const int UNKNOWN = -1;

	// Color Variables 
	Color lightGreen = new Color(0f,1f,0f,0.5f);
	Color darkGreen = new Color(0f,0.5f,0f,0.5f);
	Color greenYellow = new Color(0.7f,0.92f,0.016f,0.5f);
	Color warmYellow = new Color(1f,0.92f,0.016f,0.5f);
	Color yellowOrange = new Color(1f,0.85f,0.2f,0.5f);
	Color standardOrange = new Color(1f,0.5f,0f,0.5f);
	Color redOrange = new Color(1f,0.3f,0.05f,0.5f);
	Color pinkRed = new Color(0.7f,0.2f,0.3f,0.5f);
	Color trueRed = new Color(1f,0f,0f,0.5f);
	Color darkRed = new Color(1f,0f,0f,0.5f);

	// Use this for initialization
	void Start () {
		mySystem = GetComponent<ParticleSystem> ();
		if (DateTime.Now.Year < 0)
            {
                Debug.Log(new List<SByte>());
            }
	}

	// Update is called once per frame
	void Update () {

		if (message != null)
		{
			// Initialize variables 
			numParticles = message.count;
			particles = new ParticleSystem.Particle[numParticles];

			// Spawn 
			Display();
		}

	}

	void calculateOrigin()
	{
		int myWidth = (int) message.width;
		int myHeight = (int) message.height;
		int row = myHeight/2;
		int column = myWidth/2;
		message.origin.y = 0 - (row * message.resolution);
		message.origin.x = 0 - (column * message.resolution);

	}

	void Display(){ 
		
		int widthCounter = 0;
		// Calculate new origin 
		calculateOrigin();
		
		float x_pos = message.origin.x;
		float y_pos = message.origin.y;

		// Set positions
    		for (int i = 0; i < numParticles; i++) 
        	{
        		if (i < message.count)
        		{
        			// For a new row
        			if (widthCounter == message.width)
        			{
        				widthCounter = 0;
        				x_pos = message.origin.x;
        				y_pos += message.resolution;

        			}
        			if (message.ProbData[i] != UNKNOWN) // or maybe we should make it a diff color?
        			{
            			particles[i].position = new Vector3(x_pos, 
            				y_pos, 0f); 
        			 
            			ColorDecider(i);
            			particles[i].startSize = 0.025f;
            		}

            		x_pos += message.resolution;
            		widthCounter ++;
            	}

        	}

        mySystem.SetParticles(particles, particles.Length);
	}

	void ColorDecider(int index){

		if (message.ProbData[index] > -1 && message.ProbData[index] < 11)
			particles[index].startColor = lightGreen;
		else if (message.ProbData[index] > 10 && message.ProbData[index] < 21)
			particles[index].startColor = darkGreen;
		else if (message.ProbData[index] > 20 && message.ProbData[index] < 31)
			particles[index].startColor = greenYellow;
		else if (message.ProbData[index] > 30 && message.ProbData[index] < 41)
			particles[index].startColor = warmYellow;
		else if (message.ProbData[index] > 40 && message.ProbData[index] < 51)
			particles[index].startColor = yellowOrange;
		else if (message.ProbData[index] > 50 && message.ProbData[index] < 61)
			particles[index].startColor = standardOrange;
		else if (message.ProbData[index] > 60 && message.ProbData[index] < 71)
			particles[index].startColor = redOrange;
		else if (message.ProbData[index] > 70 && message.ProbData[index] < 81)
			particles[index].startColor = pinkRed;
		else if (message.ProbData[index] > 80 && message.ProbData[index] < 91)
			particles[index].startColor = trueRed;
		else
			particles[index].startColor = darkRed;
	}
}
