//DELETE ME

using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
public abstract class Fadable
{
    IEnumerator FadeOut(GameObject any, PlayerState newState)
    {
        //fade out
        Image fader = any.gameObject.transform.GetComponentsInChildren<Image>(true).FirstOrDefault(t => t.name == "Fader");
        for (float i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.01f);
            fader.color = new Color(0, 0, 0, i / 100.0f);
        }
    }
    IEnumerator FadeIn(GameObject any, PlayerState newState)
    { 
        //fade in
        Image fader = any.gameObject.transform.GetComponentsInChildren<Image>(true).FirstOrDefault(t => t.name == "Fader");
        for (float i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.01f);
            fader.color = new Color(0, 0, 0, (100 - i) / 100.0f);
        }
    }
}
