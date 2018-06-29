using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class PeopleProjector : MonoBehaviour {

	public PeopleReceiver message;
	// Particle system variables 
	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles;

	private const int EMPTY = 0;

	// Use this for initialization
	void Start () {

		mySystem = GetComponent<ParticleSystem>();
	}
	
	// Update is called once per frame
	void Update () {

		numParticles = message.people.Length;

		if (numParticles > EMPTY)
		{
			particles = new ParticleSystem.Particle[numParticles];
			Display();
		}
		else
		{
			particles = new ParticleSystem.Particle[EMPTY];
			Display();
		}
		
	}

	void Display(){

	// Set positions
    	for (int i = 0; i < numParticles; i++) 
        {
        	if (i < message.people.Length)
        	{
            	particles[i].position = new Vector3(message.people[i].x, 
            		message.people[i].y, 0);  

            	particles[i].startColor = Color.yellow;
            	particles[i].startSize = 1f;
            }
        }

     	mySystem.SetParticles(particles, particles.Length);
	}
}
