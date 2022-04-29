using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class AudioContext
{
    public float BGMVolume {get; set;}
    public float SFXVolume { get; set; }
    public AudioSource BGMSource { get; set; }
    public AudioSource SFXSource { get; set; }
    public AudioContext()
    {
        BGMVolume = 0.5f;
        SFXVolume = 0.75f;
    }
    public void PlaySFX()
    {
        if (SFXSource == null) return;
        SFXSource.pitch = Random.Range(.9f, 1.2f);
        SFXSource.Play();
    }
    
}
