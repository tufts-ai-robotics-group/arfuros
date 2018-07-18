using System.Collections;
using System.Collections.Generic;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class deletebtn : MonoBehaviour
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
        if (IPAddress.text.Length > 1)
            IPAddress.text = IPAddress.text.Substring(0, IPAddress.text.Length - 1);
    }
}
