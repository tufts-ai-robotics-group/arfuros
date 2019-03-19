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

    private Vector3 lastAddedWorldPos;

    // Use this for initialization
    void Start () {
        defaultPos = ExtrapolationTarget.transform.localPosition;
        defaultOri = ExtrapolationTarget.transform.localRotation;
    }

    // Update is called once per frame
    void Update()
    {
        updateLatest();

        if (TrackerCube.isTracked && !TrackerCube.isExtended)
        {
            ExtrapolationTarget.transform.localPosition = defaultPos;
            ExtrapolationTarget.transform.localRotation = defaultOri;

            lastTrackedWorldPos = latestWorldPos;
            lastTrackedWorldOri = latestWorldOri;

            lastAddedWorldPos = lastTrackedWorldPos;
        }

        if (TrackerCube.isExtended)
        {
            ExtrapolationTarget.transform.localRotation = Quaternion.Euler(defaultOri.eulerAngles + (lastTrackedWorldOri.eulerAngles - latestWorldOri.eulerAngles));

            float distance_travelled = (lastAddedWorldPos - latestWorldPos).magnitude;
            Vector3 local_forward = ExtrapolationTarget.transform.InverseTransformVector(ExtrapolationTarget.transform.forward);
            ExtrapolationTarget.transform.Translate(distance_travelled * local_forward);

            lastAddedWorldPos = latestWorldPos;

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
