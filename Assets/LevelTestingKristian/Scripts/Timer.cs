using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine;

public class Timer : MonoBehaviour
{
    public float currentTime = 60f;
    GameObject canvas;

    private Text timerText;
    // Start is called before the first frame update
    void Start()
    {
        canvas = GameObject.Find("Canvas");
        timerText = canvas.transform.GetChild(3).GetComponent<Text>();
        Debug.Log(canvas.transform.GetChild(3).GetComponent<Text>());
    }

    // Update is called once per frame
    void Update()
    {
        currentTime = currentTime - (1 * Time.deltaTime);
        timerText.text = currentTime.ToString("0.00");
    }

}
