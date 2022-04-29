using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpColliderListener : MonoBehaviour
{
    void OnTriggerEnter(Collider collision)
    {
        Debug.Log("COLLIDE");
        if(collision.gameObject.GetComponent<ShipMarker>() != null)
        {
            collision.gameObject.GetComponent<PowerUpBehavior>().Activate();
            Destroy(gameObject);
        }
    }
}
