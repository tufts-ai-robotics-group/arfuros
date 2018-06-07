using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour {

	public void onMenu()
    {
        SceneManager.LoadScene("menu");
    }

    public void onQuit()
    {
        Application.Quit();
    }
}
