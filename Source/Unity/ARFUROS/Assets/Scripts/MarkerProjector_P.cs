using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

//MARKER PROJECTOR_P .cs FILE
//ARFUROS PROJECT ADDITION FOR TRYING PARTICLESYSTEM
//Charlie DeLorey


public class MarkerProjector_P : MonoBehaviour
{
   
    public MarkerReceiver message;

    private ParticleSystem mySystem;
    private ParticleSystem.Particle[] particles;
   

    // Use this for initialization
    void Start()
    {
        mySystem = GetComponent<ParticleSystem>();
        
        if (DateTime.Now.Year < 0)
        {
            Debug.Log(new List<SByte>());
        }
    }

    // Update is called once per frame
    void Update()
    {

        if (message != null)
        {
            particles = new ParticleSystem.Particle[1];
            Display();
        }
    }

    void Display()
    {

        particles[0].position = new Vector3(message.pose.x, message.pose.y, message.pose.z);

        particles[0].startColor = new Color32((byte)(message.color.r * 255),
                                              (byte)(message.color.g * 255),
                                              (byte)(message.color.b * 255),
                                              (byte)(message.color.a * 255));
        particles[0].startSize = 1f;

        mySystem.SetParticles(particles, particles.Length);

        /*SetColor();
        //rend = GetComponent<Renderer>();

        rend.material.color = new Color32((byte)(message.color.r * 255),
                                          (byte)(message.color.g * 255),
                                          (byte)(message.color.b * 255),
                                          (byte)(message.color.a * 255));

        
        mat.SetColor("_Color", (new Color32((byte)(message.color.r * 255),
                          (byte)(message.color.g * 255),
                          (byte)(message.color.b * 255),
                          (byte)(message.color.a * 255))));

        mkr.GetComponent<Renderer>().material = mat;
        

        //set pose
        mkr.transform.position = new Vector3(message.pose.x, 
                                             message.pose.y, 
                                             message.pose.z);

        //set orientation
        mkr.transform.rotation = new Quaternion(message.orientation.x, 
                                                message.orientation.y, 
                                                message.orientation.z, 
                                                message.orientation.w);

        //set scale
        mkr.transform.localScale = new Vector3(message.scale.x, 
                                               message.scale.y, 
                                               message.scale.z);

        //set the marker to be visible
        mkr.SetActive(true);
        */
    }

}
