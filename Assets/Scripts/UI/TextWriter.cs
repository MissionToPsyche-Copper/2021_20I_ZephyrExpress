using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextWriter : MonoBehaviour
{
    private Text messageText;

    private void Awake() 
    {

        messageText = transform.Find("message").Find("messageText").GetComponent<Text>();
    }


    // Start is called before the first frame update
    void Start()
    {
        messageText.text = "Hello World!!";
    }

    
}
