using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scroll : MonoBehaviour {

	public float scrollSpeed = 20f;
	Vector2 startPos;
	// Use this for initialization
	void Start () {
		startPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate((new Vector3(-1,0,0)) * scrollSpeed * Time.deltaTime);
		if (transform.position.y < -1024)
			transform.position = startPos;
	}
}
