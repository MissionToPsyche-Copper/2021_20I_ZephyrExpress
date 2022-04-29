using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemGet : MonoBehaviour
{
    [SerializeField] private GameObject objWithScript;
    [SerializeField] private float speedIncrease = 10.0f;

    private void Start()
    {
        objWithScript = GameObject.Find("Player");
    }

    private void OnTriggerEnter(Collider other)
    {
        Destroy(gameObject);
        objWithScript.GetComponent<FowardMove>().shipSpeed += speedIncrease;
        objWithScript.GetComponent<FowardMove>().shipSpeedHolder += speedIncrease;
        objWithScript.GetComponent<FowardMove>().shipSpeedHolderSpeedUp = objWithScript.GetComponent<FowardMove>().shipSpeedHolder + 5;
        //objWithScript.GetComponent<FowardMove>().shipSpeed += 20.0f;
    }
}
