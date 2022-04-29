using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shipRotate : MonoBehaviour
{
    private float rotateSpeed = -10.0f;
    public GameObject rotateObject;

    // Update is called once per frame
    private void Update()
    {
        transform.localScale = new Vector3(30, 30, 30);
        transform.RotateAround(rotateObject.transform.position, new Vector3(0, 1, 0), rotateSpeed * Time.deltaTime);
    }
}
