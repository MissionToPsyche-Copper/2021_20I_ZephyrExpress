using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionEnterTest : MonoBehaviour
{
    public GameObject canvas;
    public GameObject test;
    public float timerChange = 3f;
    public int numberOfcollisions;
    private void Start()
    {
        canvas = GameObject.Find("Canvas");
        test = GameObject.Find("Canvas");
    }
   
    private void OnCollisionEnter(Collision collision)
    {
        GetComponent<BoxCollider>().isTrigger = true;
        updateValuesOnCollision();
        canvas.GetComponent<Timer>().currentTime -= timerChange;
        if (test.GetComponent<Health>().shield >= 1)
        {
            test.GetComponent<Health>().shield -= 1;
        }
        else if (test.GetComponent<Health>().health >= 1)
        {
            test.GetComponent<Health>().health -= 1;
        }
        GetComponent<BoxCollider>().isTrigger = false;
    }

    public void updateValuesOnCollision()
    {
        numberOfcollisions++;
    }
}
