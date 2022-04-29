using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBoost : MonoBehaviour
{
    public int multiplier = 1;
    //public float duration = 1f;
    [SerializeField] private GameObject objWithScript;

    private void Start()
    {
        objWithScript = GameObject.Find("Canvas");     
    }

    void OnTriggerEnter(Collider other)
    {

        Debug.Log("Trigger works.");

   


        /*
        if (other.CompareTag("Player"))
        {
            Debug.Log("Player detected.");
            StartCoroutine(Pickup(other));
        }
        */

        Destroy(gameObject);

        Player.Log("The cheese was delicious!");
        //objWithScript.GetComponent<Health>().health += multiplier;
        Player.GetInstance().StateMachine.Health += multiplier;
    }

   
}