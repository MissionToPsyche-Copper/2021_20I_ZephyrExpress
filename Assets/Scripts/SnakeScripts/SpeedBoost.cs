using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedBoost : MonoBehaviour
{
    public float multiplier = 2f;
    public float duration = 10f;
    //public float shipSpeed = 4.0f;

    void OnTriggerEnter(Collider other)
    {

        Debug.Log("Trigger works.");


        if (other.CompareTag("Player"))
        {
            Debug.Log("Player detected.");
            StartCoroutine(Pickup(other));
        }

    }

    IEnumerator Pickup(Collider er)
    {
        Debug.Log("The hot dog was delicious!");

        //ShipController stats;
        //ShipMovement stats = player.GetComponent<ShipController>();

        //stats.moveSpeed *= multiplier;
        //stats.forwardSpeed *= multiplier;

        GetComponent<MeshRenderer>().enabled = false;
        GetComponent<Collider>().enabled = false;

        yield return new WaitForSeconds(duration);

        //stats.forwardSpeed /= multiplier;
       //stats.moveSpeed /= multiplier;

        Destroy(gameObject);
    }
}
