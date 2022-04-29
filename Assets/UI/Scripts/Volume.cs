using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;
using System.Linq;
public class Volume : MonoBehaviour
{
    public AudioSource bgmSource;
    public AudioSource sfxSource;
    public Toggle ScreenShakeToggle;
    public void Start()
    {
        bgmSource = GetComponentInChildren<BGMSourceMarker>().GetComponentInParent<AudioSource>();
        bgmSource.volume = Player.GetInstance().Options.BGMVolume;
        sfxSource = GetComponentInChildren<SFXSourceMarker>().GetComponentInParent<AudioSource>();
        sfxSource.volume = Player.GetInstance().Options.SFXVolume;
        ScreenShakeToggle = GetComponentInChildren<Toggle>(true);
    }
    public void SetBGMVolume ()
    {
        float volume = gameObject.GetComponentsInChildren<Slider>(true).FirstOrDefault(t => t.name == "BGMVolumeSlider").value;
        Player.GetInstance().Options.BGMVolume = volume;
        bgmSource.volume = volume;
    }
    public void SetSFXVolume()
    {
        float volume = gameObject.GetComponentsInChildren<Slider>(true).FirstOrDefault(t => t.name == "SFXVolumeSlider").value;
        Player.GetInstance().Options.SFXVolume = volume;
        sfxSource.volume = volume;
        sfxSource.Play();
    }
}
