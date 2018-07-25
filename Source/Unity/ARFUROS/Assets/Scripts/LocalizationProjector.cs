using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class LocalizationProjector : MonoBehaviour {

	// Rotation Variables 
	//public GameObject cube; // Get cube's rotation
	//public GameObject ParticleRotation; // Get particle's rotation
	//private Vector3 cubeRotation;
	//private float[] zRotation;
	//private Vector3[] poses;

	public  PoseArrayReceiver message;
	

	private ParticleSystem mySystem;
	private ParticleSystem.Particle[] particles;
	private int numParticles; 
	public float size = 0.06f;

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

		// Code for rotation only 
		/*// Get information from cube gameobject 
		var rotationScript = ParticleRotation.GetComponent<LocalParticleRotation>();
		message = rotationScript.message;

		//zRotation = new float[message.orientations.Length];
		//zRotation = rotationScript.zRotation;

		poses = new Vector3[message.poses.Length];
		for (int i = 0; i < message.poses.Length; i++)
		{
			poses[i].x = rotationScript.message.poses[i].x;
			poses[i].y = rotationScript.message.poses[i].y;
			poses[i].z = rotationScript.message.poses[i].z;
		}*/


		if (message != null)
		{						
			// Initialize variables 
			numParticles = message.poses.Length;
			particles = new ParticleSystem.Particle[numParticles];
			
			// Spawn 
			Display();
		}

	}

	void Display(){ 

		/* // Adjusting particle size based on count 
		int count = 1000;
		
		if (numParticles < count)
			size = 0.03f; 
		else 
			size = 0.02f; */

		// Set positions
			size = 0.025f;
			
    		for (int i = 0; i < numParticles; i++) 
        	{
        		if (i < message.poses.Length)
        		{
            		particles[i].position = new Vector3(message.poses[i].x , 
            			message.poses[i].y , 0f); 
        		
            		particles[i].startColor = Color.magenta;
            		particles[i].startSize = size;
            	
            		// Transform arrow to point in direction of front of cube 
            		// zRotation corresponds to incoming orientation messages

            		/*cubeRotation = new Vector3(cube.transform.localEulerAngles.x, cube.transform.localEulerAngles.y/-1f,
            			(cube.transform.localEulerAngles.z/-1f) - 90f); // + zRotation[i]

            		particles[i].rotation3D = cubeRotation;*/
    
            	}
        	}

     	  	mySystem.SetParticles(particles, particles.Length);
	}
}

