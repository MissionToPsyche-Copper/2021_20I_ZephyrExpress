using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Testing : MonoBehaviour
{
    public float currentSpeed = 5;
    //public float shipSpeedHolder;
    GameObject player;
    private bool speedDec = false;
    private bool speedInc = false;

    // Update is called once per frame
    private void Start()
    {
        player = GameObject.Find("Player");
    }
    void Update()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            player.GetComponent<FowardMove>().shipSpeed = 5;
        }
        else if (Input.GetKey(KeyCode.Q))
        {
            player.GetComponent<FowardMove>().shipSpeed = player.GetComponent<FowardMove>().shipSpeedHolderSpeedUp;
        }
        else
        {
            player.GetComponent<FowardMove>().shipSpeed = player.GetComponent<FowardMove>().shipSpeedHolder;
        }

        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");
    
        Vector3 direction = new Vector3(horizontal, vertical, 0);
        Vector3 FinalDirection = new Vector3(horizontal, vertical, 1.0f);

        transform.position += direction * currentSpeed * Time.deltaTime;
        
        transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(FinalDirection), (Mathf.Deg2Rad * 50.0f));
    }

    void decSpeed() {
        if (speedDec == true)
        {
            speedDec = false;
            player.GetComponent<FowardMove>().shipSpeed--;
            Debug.Log(player.GetComponent<FowardMove>().shipSpeed);
        }
    }

    void incSpeed()
    {
        if (speedInc == true)
        {
            speedInc = false;
            player.GetComponent<FowardMove>().shipSpeed++;
            Debug.Log(player.GetComponent<FowardMove>().shipSpeed);
        }
    }
}
