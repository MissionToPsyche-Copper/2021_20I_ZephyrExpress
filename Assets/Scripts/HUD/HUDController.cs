using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;

public class HUDController : MonoBehaviour
{
    public Image fader;
    public void Start()
    {
        StartUp();
    }
    public void StartUp()
    {
        fader = gameObject.transform.GetComponentsInChildren<Image>(true).FirstOrDefault(t => t.name == "Fader");
        FadeInAsync();
    }
    public void FadeOutAsync(Action exit)
    {
        //StartCoroutine(FadeOut(exit));
        exit();
    }
    public void FadeInAsync()
    {
        StartCoroutine(FadeIn());
    }
    IEnumerator FadeOut(Action exit)
    {
        //fade to black
        for (float i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.01f);
            fader.color = new Color(0, 0, 0, i / 100.0f);
            
        }
        exit();
    }
    IEnumerator FadeIn()
    {
        //fade to transparent
        for (float i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.01f);
            fader.color = new Color(0, 0, 0, (100 - i) / 100.0f);
        }
    }
    public void SetBGMVolume()
    {
        Slider BGMVolumeSlider = gameObject.GetComponentsInChildren<Slider>(true).FirstOrDefault(t => t.name == "BGMVolumeSlider");
        AudioSource BGMSource = gameObject.GetComponentsInChildren<AudioSource>(true).FirstOrDefault(t => t.name == "BGMSource");

        float volume = BGMVolumeSlider.value;

        Player.GetInstance().Options.BGMVolume = volume;
        BGMSource.volume = volume;
    }
    public void SetSFXVolume()
    {
        Slider SFXVolumeSlider = gameObject.GetComponentsInChildren<Slider>(true).FirstOrDefault(t => t.name == "SFXVolumeSlider");
        AudioSource SFXSource = gameObject.GetComponentsInChildren<AudioSource>(true).FirstOrDefault(t => t.name == "SFXSource");

        float volume = SFXVolumeSlider.value;

        Player.GetInstance().Options.SFXVolume = volume;
        SFXSource.volume = volume;
        SFXSource.Play();
    }
}
