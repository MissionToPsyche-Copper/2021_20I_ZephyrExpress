using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorChange : MonoBehaviour
{
    [SerializeField] private float timeInterval = 1;
    private Material mat;
    
    // Update is called once per frame
    private void Start()
    {

        mat = GetComponent<Renderer>().material;
    }
    void Update()
    {
        mat.color = Color.Lerp(Color.red, Color.yellow, Mathf.PingPong(Time.time, timeInterval));
    }

}
