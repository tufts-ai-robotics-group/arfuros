using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonScript : MonoBehaviour {

    public InputField IPAddress;
    public string addNumber;
    public Button myButton;
    public GameObject glow;

    private void Start()
    {
        glow.SetActive(false);
        Button btn = myButton.GetComponent<Button>();
        btn.onClick.AddListener(Click);
    }
    void Click()
    {
        IPAddress.text += addNumber;
    }

    public void onHover()
    {
        glow.SetActive(true);
    }

    public void offHover()
    {
        glow.SetActive(false);
    }
}
