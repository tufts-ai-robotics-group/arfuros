using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scroll : MonoBehaviour {

	public float scrollSpeed = 55f;
	//public Image startImage;
	Vector2 startPos;
	// Use this for initialization
	void Start () {
		startPos = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate((new Vector3(-1,0,0)) * scrollSpeed * Time.deltaTime);
		if (transform.position.y < 40)
			transform.position = startPos;
	}
}
