using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class PowerupSound : MonoBehaviour
{
    public AudioSource powerUpSound;
    private Light powerUpLight;

    IEnumerator PlayLight(Collision collision)
    {
        
        powerUpLight.enabled = true;
        
        float size = 100f;
        float duration = 0.25f;
        for (int i = 0; i < size; i++)
        {
            powerUpLight.intensity = ((size-i) / size);
            yield return new WaitForSeconds(duration/size);
        }
        powerUpLight.enabled = false;
    }

    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            
            powerUpLight = collision.gameObject.GetComponentsInChildren<Light>(true).FirstOrDefault(t => t.name == "Area Light");
            powerUpLight.color = gameObject.GetComponentInChildren<ParticleSystem>(true).main.startColor.color;
            powerUpSound.Play();
            
            StartCoroutine(PlayLight(collision));
        }
    }
}
