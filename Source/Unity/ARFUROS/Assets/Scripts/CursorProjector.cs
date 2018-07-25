using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CursorProjector : MonoBehaviour {
    public GameObject cursor;
    private RaycastHit hit;

    int layermask = 1 << 5;
	// Update is called once per frame
	void Update () {
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layermask))
        {
            cursor.SetActive(true);
            cursor.transform.position = hit.point;
        }
        else
            cursor.SetActive(false);
    }
}
