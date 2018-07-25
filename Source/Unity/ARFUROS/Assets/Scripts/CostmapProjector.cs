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
	float s_value = 0.84f;
	float v_value = 1f;
	float h_value;
	const float Hue_Dividor = 3f;


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

		if (message != null )
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
		// New calculation for message origin 
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
            			particles[i].position = new Vector3(x_pos, y_pos, 0f); 
        			 
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

		h_value = ((1f - (message.ProbData[index]/100f)))/ Hue_Dividor;
		particles[index].startColor = Color.HSVToRGB(h_value, s_value, v_value);
		
	}
}
