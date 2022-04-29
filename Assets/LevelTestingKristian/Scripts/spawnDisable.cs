using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawnDisable : MonoBehaviour
{
    [SerializeField] private GameObject spawner;
    [SerializeField] private GameObject target;
    private float dist;
    // Start is called before the first frame update
    void Start()
    {
        spawner = GameObject.Find("Spawner");
        target = GameObject.Find("Egipt");
    }

    // Update is called once per frame
    void Update()
    {
        /*
        dist = Vector3.Distance(target.transform.position, spawner.transform.position);
        if (dist < 15) 
        {
            spawner.GetComponent<spawnerV2>().disable = 1;
        }
        */
    }
}
