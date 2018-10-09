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

        if (!TrackerCube.isExtended)
        {
            ExtrapolationTarget.transform.localPosition = defaultPos;
            ExtrapolationTarget.transform.localRotation = defaultOri;

            lastTrackedWorldPos = latestWorldPos;
            lastTrackedWorldOri = latestWorldOri;
        }
        else
        {
            ExtrapolationTarget.transform.localPosition = defaultPos + (latestWorldPos - lastTrackedWorldPos);
            ExtrapolationTarget.transform.localRotation = Quaternion.Euler (defaultOri.eulerAngles + (latestWorldOri.eulerAngles - lastTrackedWorldOri.eulerAngles));
        }
    }

    void updateLatest()
    {
        latestWorldPos = message.position;
        latestWorldOri = message.orientation;
    }
}
