using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUp : MonoBehaviour
{
    public float multiplier = 1.4f;

    void OnTriggerEnter(Collider other)
    {

        Debug.Log("Trigger works.");


        if (other.CompareTag("Player"))
        {
            Debug.Log("Player detected.");
            Pickup(other);
        }

    }

    void Pickup(Collider player)
    {
        Debug.Log("The burger was delicious!");

        player.transform.localScale *= multiplier;

        Destroy(gameObject);
    }
}
