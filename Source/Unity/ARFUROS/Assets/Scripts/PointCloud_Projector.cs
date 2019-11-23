using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using RosSharp.RosBridgeClient;
using System;

public class PointCloud_Projector : MonoBehaviour
{
    public PointCloudReceiver message;

    public Text tcount;

    private ParticleSystem mySystem;
    private ParticleSystem.Particle[] particles;
    private Vector3[] particlePositions;
    private int dataPoints;
    private int numParticles;

    public int seq;

    // Start is called before the first frame update
    void Start()
    {
        mySystem = GetComponent<ParticleSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        if (message != null)
        {
            // Initialize variables 
            seq = message.seq;
            numParticles = message.numPoints;
            tcount.text = "Total Points: " + numParticles.ToString() + "Seq: " + seq.ToString();
            particles = new ParticleSystem.Particle[numParticles];

            // Spawn 
            Display();
            //ColorChanger();
        }
    }
    void Display()
    {
        //set positions
        for (int i = 0; i < numParticles; i++)
        {
            if (i < message.numPoints)
            {
                particles[i].position = new Vector3(message.points[i].x, message.points[i].y, message.points[i].z);
                particles[i].startColor = Color.yellow;
                particles[i].startSize = 0.025f;
            }
        }

        mySystem.SetParticles(particles, particles.Length);

    }
}