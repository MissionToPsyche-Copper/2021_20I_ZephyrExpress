using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StrafeController : MonoBehaviour
{
    void Update()
    {
        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");

        Vector3 direction = new Vector3(horizontal, vertical, 0);
        Vector3 FinalDirection = new Vector3(horizontal, vertical, 1.0f);

        transform.position += direction * Player.GetInstance().MotionContext.BaseStrafingSpeed * Time.deltaTime;
        transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(FinalDirection), (Mathf.Deg2Rad * 50000.0f * Time.deltaTime));
    }
}
