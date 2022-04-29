using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHandler : MonoBehaviour
{
    public float timerChange = 3f;
    public float shieldFlickerTime = .2f;
    public int numberOfCollisions;
        private void OnCollisionEnter(Collision collision)
    {
        GetComponent<BoxCollider>().isTrigger = true;
        UpdateValuesOnCollision();
        Player.GetInstance().StateMachine.ChangeTimer(timerChange);
        Player.GetInstance().StateMachine.TakeDamage();
        GetComponent<BoxCollider>().isTrigger = false;
    }

    public void UpdateValuesOnCollision()
    {
        numberOfCollisions++;
    }
}
