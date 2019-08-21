using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using System;

//MARKER PROJECTOR .cs FILE
//ARFUROS PROJECT ADDITION
//Charlie DeLorey


public class MarkerProjector : MonoBehaviour
{
   
    public MarkerReceiver message;
    //public Renderer rend;
    public Material mat;

    public GameObject mkr;


    /*
    GameObject MakePrimitive(int type) {
        if (type == 1) {
            return mkr = GameObject.CreatePrimitive(PrimitiveType.Cube);
        }
        else if (type == 2) {
            return mkr = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        }
        else if (type == 3) {
            return mkr = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        }
        else
        {
            return mkr = GameObject.CreatePrimitive(PrimitiveType.Cube);
        }
    }
    */


    // Use this for initialization
    void Start()
    {
        mkr = GameObject.CreatePrimitive(PrimitiveType.Cube);

        //Get the renderer of the object so we can access the color
        //rend = mkr.GetComponent<Renderer>();


        //mySystem = GetComponent<ParticleSystem>();
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
            // Spawn 
            Display();
        }

    }

    void Display()
    {
        // So what I want to do here is to take the marker data and create a GameObject
        // (or maybe a prefab??) and make it the passed marker, and place it correctly

        //Debug.Log("MarkerProjector Display");

        //SetColor();
        //rend = GetComponent<Renderer>();

        //rend.material.color
        /*mat = new Color32((byte)(message.color.r * 255),
                          (byte)(message.color.g * 255),
                          (byte)(message.color.b * 255),
                          (byte)(message.color.a * 255));
                          */

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

    }

    /*
    void SetColor()
    {

        /*mkr.Renderer.Material.Color = new Color32((byte)(message.color.r * 255), 
                                                  (byte)(message.color.g * 255), 
                                                  (byte)(message.color.b * 255), 
                                                  (byte)(message.color.a * 255));
                                                 
        
    }*/


}
