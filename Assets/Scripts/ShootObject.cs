using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootObject : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject missile;
    private Vector3 initialPosition;
    void Start()
    {
        initialPosition = gameObject.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.RotateAround(missile.transform.position, new Vector3(0.01f, 0, 0), 50 * Time.deltaTime);
        transform.position += new Vector3(5f, 0, 0) * Time.deltaTime;
        if (gameObject.transform.position.x > 20)
            gameObject.transform.position = initialPosition;
    }
}
