using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
public class OptionsController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void OpenOptionsMenu()
    {
        Slider BGMVolumeSlider = gameObject.GetComponentsInChildren<Slider>(true).FirstOrDefault(t => t.name == "BGMVolumeSlider");
        BGMVolumeSlider.value = Player.GetInstance().Options.BGMVolume;
        Slider SFXVolumeSlider = gameObject.GetComponentsInChildren<Slider>(true).FirstOrDefault(t => t.name == "SFXVolumeSlider");
        SFXVolumeSlider.value = Player.GetInstance().Options.SFXVolume;
        Toggle ScreenShakeToggle = gameObject.GetComponentsInChildren<Toggle>(true).FirstOrDefault(t => t.name == "ScreenShakeToggle");
        ScreenShakeToggle.isOn = Player.GetInstance().Options.ScreenShakeEffect;
        Debug.Log("BGMVolume" + Player.GetInstance().Options.BGMVolume);
        Debug.Log("SFXVolume" + Player.GetInstance().Options.SFXVolume);
    }
    public void SetScreenShakeToggle(bool value)
    {
        //Debug.Log(value);
        Toggle ScreenShakeToggle = gameObject.GetComponentsInChildren<Toggle>(true).FirstOrDefault(t => t.name == "ScreenShakeToggle");
        Player.GetInstance().Options.ScreenShakeEffect = ScreenShakeToggle.isOn;
    }
}
