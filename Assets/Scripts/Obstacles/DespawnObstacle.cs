using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DespawnObstacle : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(RemoveObject(Player.GetInstance().StateMachine.ObstacleDespawnDuration));
    }
    IEnumerator RemoveObject(float duration)
    {
        yield return new WaitForSeconds(duration);
        Destroy(gameObject);
    }
}
