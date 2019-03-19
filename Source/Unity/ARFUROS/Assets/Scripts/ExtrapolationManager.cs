using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;


public class ExtrapolationManager : MonoBehaviour {
    public PoseWithCovarianceStampedReceiver message;
    public GameObject ExtrapolationTarget;
    public HyperCubeTrackableEventHandler TrackerCube;

    private Vector3 defaultPos;
    private Quaternion defaultOri;

    private Vector3 lastTrackedWorldPos;
    private Quaternion lastTrackedWorldOri;

    private Vector3 latestWorldPos;
    private Quaternion latestWorldOri;
    // Use this for initialization
    void Start () {
        defaultPos = ExtrapolationTarget.transform.localPosition;
        defaultOri = ExtrapolationTarget.transform.localRotation;
    }
	
	// Update is called once per frame
	void Update () {
        updateLatest();

        if (TrackerCube.isTracked && !TrackerCube.isExtended)
        {
            ExtrapolationTarget.transform.localPosition = defaultPos;
            ExtrapolationTarget.transform.localRotation = defaultOri;

            lastTrackedWorldPos = latestWorldPos;
            lastTrackedWorldOri = latestWorldOri;
        }

        if(TrackerCube.isExtended)
        {
            ExtrapolationTarget.transform.localRotation = Quaternion.Euler (defaultOri.eulerAngles + (lastTrackedWorldOri.eulerAngles - latestWorldOri.eulerAngles));

            float distance_travelled = (lastTrackedWorldPos - latestWorldPos).magnitude;
            Vector3 local_forward = ExtrapolationTarget.transform.InverseTransformVector(ExtrapolationTarget.transform.forward);
            ExtrapolationTarget.transform.localPosition = defaultPos + (distance_travelled * local_forward);

            //print("Extrapolating:");
            //print(ExtrapolationTarget.transform.localPosition);
            //print(ExtrapolationTarget.transform.localRotation.eulerAngles);
        }
    }

    void updateLatest()
    {
        latestWorldPos = message.position;
        latestWorldOri = message.orientation;
    }
}
