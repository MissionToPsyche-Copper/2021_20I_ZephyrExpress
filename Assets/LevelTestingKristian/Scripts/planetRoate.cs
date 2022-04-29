using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class planetRoate : MonoBehaviour
{
    private float rotateSpeed = 5.0f;

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, 0, rotateSpeed) * Time.deltaTime);
    }
}
