using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateShip : MonoBehaviour
{
    private float rotateSpeed = -70.0f;
    public GameObject rotateObject;

    public bool doRotate = true;

    // Update is called once per frame
    void Update()
    {
        if (!doRotate) return;
        transform.RotateAround(rotateObject.transform.position, new Vector3(0, 1, 0), rotateSpeed * Time.deltaTime);
    }
}
