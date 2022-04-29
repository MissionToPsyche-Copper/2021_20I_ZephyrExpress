using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerBoost : MonoBehaviour
{
    public float multiplier = 60f;
    //public float duration = 1f;
    [SerializeField] private GameObject objWithScript;

    private void Start()
    {
        objWithScript = GameObject.Find("timer");
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

        Debug.Log("The cheese was delicious!");

        //Player.GetInstance().StateMachine.HUD.Log("The cheese was delicious!");
        objWithScript.GetComponent<Timer>().currentTime += multiplier;

    }
}
