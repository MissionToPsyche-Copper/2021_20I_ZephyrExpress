using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class PlayerInitializer : MonoBehaviour
{
    public ShipInitializer shipInitializer;

    public bool startFromState = false;
    public int startingDialogueState = 0;
    public PlayerStateMachine.States startingState;
    void Start()
    {
        Player.GetInstance().StateMachine.HUDC = GetComponentInChildren<HUDController>();
        Player.GetInstance().StateMachine.HUD = GetComponentInChildren<ShipHUDController>();

        Player.GetInstance().AudioContext.BGMSource = GetComponentInChildren<BGMSourceMarker>().GetComponentInParent<AudioSource>();
        Player.GetInstance().AudioContext.SFXSource = GetComponentInChildren<SFXSourceMarker>().GetComponentInParent<AudioSource>();

        Player.GetInstance().AudioContext.BGMSource.volume = Player.GetInstance().Options.BGMVolume;
        Player.GetInstance().AudioContext.SFXSource.volume = Player.GetInstance().Options.SFXVolume;

        if (startFromState)
        {
            startFromState = false;
            Player.GetInstance().StateMachine.SetState(startingState);
        }
    }
}
