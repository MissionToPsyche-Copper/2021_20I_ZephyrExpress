using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldBoost : MonoBehaviour
{
    public int modifier = 1;
    void OnTriggerEnter(Collider other)
    {
        Destroy(gameObject);
        Player.GetInstance().StateMachine.Shield += modifier;
        Player.Log("+{modifier} SHIELD");
    }
}
