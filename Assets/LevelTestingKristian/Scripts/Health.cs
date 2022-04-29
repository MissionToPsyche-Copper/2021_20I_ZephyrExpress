using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Health : MonoBehaviour
{
    public int shield = 2;
    public int health = 3;

    GameObject player;
    GameObject healthNShields;
    //public Text shieldText;
    //public Text healthText;
    private Text shieldText;
    private Text healthText;

    // Update is called once per frame
    private void Start()
    {
        player = GameObject.Find("arwing");
        //new
        healthNShields = GameObject.Find("Canvas");
        shieldText = healthNShields.transform.GetChild(0).GetComponent<Text>();
        healthText = healthNShields.transform.GetChild(1).GetComponent<Text>();
        //end of new
    }

    void Update()
    {
        if (shield > 0)
            shieldText.text = "SHIELD:" + shield.ToString();
        else
        {
            shieldText.text = "SHIELD DEPLETED";
        }
        healthText.text = "HEALTH:" + health.ToString();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (shield > 0)
        {
            shield--;
        }
        else
        {
            health--;
        }
    }
}
