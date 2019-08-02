using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteBlinker : MonoBehaviour {

    public SpriteRenderer spriteRen;
    public bool isBlinking;

    private const float delay = 0.25F;
    private float last_change;
    private bool blinker_on = false;

	void Start () {
        isBlinking = false;
        last_change = Time.time;
	}
	
	// Update is called once per frame
	void Update () {
        if (!isBlinking)
        {
            spriteRen.color = new Color(1f, 1f, 1f, 0.3f);
        }
        else
        {
            blinkSprite();
        }
	}

    void blinkSprite()
    {
        if(Time.time > last_change + delay)
        {
            blinker_on = !blinker_on;
            last_change = Time.time;
        }

        if (blinker_on)
        {
            spriteRen.color = new Color(1f, 1f, 1f, 1f);
        }
        else
        {
            spriteRen.color = new Color(1f, 1f, 1f, 0.3f);
        }
    }
}
