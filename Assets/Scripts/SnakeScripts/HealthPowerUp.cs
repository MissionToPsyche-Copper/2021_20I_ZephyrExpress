using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthPowerUp : MonoBehaviour
{
    public float multiplier = 2f;
    public float duration = 5f;

    void OnTriggerEnter(Collider other)
    {

        Debug.Log("Trigger works.");


        if (other.CompareTag("Player"))
        {
            Debug.Log("Player detected.");
            StartCoroutine(Pickup(other));
        }

    }

    IEnumerator Pickup(Collider player)
    {
        Debug.Log("The burger was delicious!");

        PlayerStat stats = player.GetComponent<PlayerStat>();

        stats.health *= multiplier;

        GetComponent<MeshRenderer>().enabled =false;
        GetComponent<Collider>().enabled = false;

        yield return new WaitForSeconds(duration);

        stats.health /= multiplier;

        Destroy(gameObject);
    }
}
