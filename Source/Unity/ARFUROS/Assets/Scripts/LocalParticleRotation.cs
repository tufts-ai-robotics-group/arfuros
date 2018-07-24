using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

public class LocalParticleRotation : MonoBehaviour {

	public PoseArrayReceiver message;
	public Quaternion rotation;
	public float[] zRotation;

	// Use this for initialization
	void Start () {
		
		rotation = Quaternion.identity;
	}
	
	// Update is called once per frame
	void Update () {
		
		zRotation = new float[message.orientations.Length];

		for (int i = 0; i < message.orientations.Length; i ++)
		{
			// Z is the only thing that changes... 
				rotation.z = message.orientations[i].z;
				zRotation[i] = rotation.eulerAngles.z;

		}
	}
}
