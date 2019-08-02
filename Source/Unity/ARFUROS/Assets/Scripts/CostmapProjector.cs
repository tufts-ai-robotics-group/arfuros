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

	void Display(){
        ColorDecider();

        Vector3 origin = new Vector3(message.origin.x, message.origin.y, 0);

        float rotation_angle = message.origin_orientation.eulerAngles.z;

        Vector2 x_axis = new Vector2(1, 0);
        x_axis = Quaternion.AngleAxis(rotation_angle, Vector3.forward) * x_axis;

        Vector2 y_axis = Vector2.Perpendicular(x_axis);

        Vector3 x_inc = message.resolution * Vector3.Normalize(new Vector3(x_axis.x, x_axis.y, 0));
        Vector3 y_inc = message.resolution * Vector3.Normalize(new Vector3(y_axis.x, y_axis.y, 0));

        Vector3 current = origin;

        // Set positions
        int widthCounter = 0;
        for (int i = 0; i < numParticles; i++) 
        {
        	if (i < message.count)
        	{
        		// For a new row
        		if (widthCounter == message.width)
        		{
                    current += y_inc;
                    current -= x_inc * widthCounter;
                    widthCounter = 0;
                }

                particles[i].position = current;  			 

                current += x_inc;
            	widthCounter ++;
            }
        }

        mySystem.SetParticles(particles, particles.Length);
	}

	void ColorDecider(){

        for (int i = 0; i < numParticles; i++)
        {
            particles[i].startSize = 0.025f;

            if (message.ProbData[i] == UNKNOWN)
            {
                particles[i].startColor = Color.black;
            }
            else
            {
                h_value = ((1f - (message.ProbData[i] / 100f))) / Hue_Dividor;
                particles[i].startColor = Color.HSVToRGB(h_value, s_value, v_value);
            }

        }		
	}
}
