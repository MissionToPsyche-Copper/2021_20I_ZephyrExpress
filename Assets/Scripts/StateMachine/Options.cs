using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Options
{
    public float BGMVolume { get; set; }
    public float SFXVolume { get; set; }
   public bool ScreenShakeEffect { get; set; }
    public Options()
    {
        BGMVolume = 1f;
        SFXVolume = 1f;
        ScreenShakeEffect = true;
    }
}
