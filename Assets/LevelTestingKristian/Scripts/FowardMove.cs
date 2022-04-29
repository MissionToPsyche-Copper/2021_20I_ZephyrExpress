using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FowardMove : MonoBehaviour
{
    //[SerializeField] private float shipSpeed = 4.0f;
    public float shipSpeed = 10.0f;
    public float shipSpeedHolder = 10.0f;
    public float shipSpeedHolderSpeedUp = 15.0f;
    // Update is called once per frame
    void Update()
    {
        //transform.position += transform.forward * shipSpeed * Time.deltaTime;
    }
}
