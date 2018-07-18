using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class clearbtn : MonoBehaviour
{

    public InputField IPAddress;
    public Button myButton;
    private void Start()
    {
        Button btn = myButton.GetComponent<Button>();
        btn.onClick.AddListener(Click);
    }
    void Click()
    {
        IPAddress.text = "";
    }
}