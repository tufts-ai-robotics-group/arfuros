using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class clearbtn : MonoBehaviour
{

    public InputField IPAddress;
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
        IPAddress.text = "";
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