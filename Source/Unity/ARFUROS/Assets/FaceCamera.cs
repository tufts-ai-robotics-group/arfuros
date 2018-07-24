using UnityEngine;
using System.Collections;

public class FaceCamera : MonoBehaviour
{
    public Camera cameraToFollow;

    void Update()
    {
        transform.LookAt(transform.position + cameraToFollow.transform.rotation * Vector3.forward,
            cameraToFollow.transform.rotation * Vector3.up);
    }
}