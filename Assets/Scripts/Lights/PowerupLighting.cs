using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupLighting : MonoBehaviour
{

    private Light powerUpLight;
    //private GameObject powerUpLight;

    // Start is called before the first frame update
    void Start()
    {
        powerUpLight = GetComponent<Light>();
        //powerUpLight.SetActive(false);
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
