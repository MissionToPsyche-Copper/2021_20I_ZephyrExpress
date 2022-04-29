using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player 
{
    private static Player instance = null;
    public PlayerStateMachine StateMachine { get; set; }
    public MotionContext MotionContext { get; set; }
    public AudioContext AudioContext { get; set; }
    public SummaryValues SummaryValues { get; set; }
    public ShipContext ShipContext { get; set; }
    public int DialogueState { get; set; }
    public Vector2 ScreenSize { get; set; }
    public bool shipSelected { get; set; }
    public Options Options { get; set; }
    private Player()
    {
        StateMachine = new PlayerStateMachine();
        StateMachine.ObstacleDespawnDuration = 60f;
        MotionContext = new MotionContext();
        AudioContext = new AudioContext();
        SummaryValues = new SummaryValues();
        ShipContext = new ShipContext();
        ScreenSize = new Vector2(0, 0);
        DialogueState = 0;
        shipSelected = false;
        Options = new Options();
    }
    
    public static Player GetInstance()
    {
        if (instance == null)
        {
            instance = new Player();
        }
        return instance;
    }
    public static void Log(string message)
    {
        Player.GetInstance().StateMachine.HUD.Log(message);
    }
    public static void Log(string message, Color color)
    {
        Player.GetInstance().StateMachine.HUD.Log(message,color);
    }
    public static void UpdateHUD()
    {
        Player.GetInstance().StateMachine.UpdateHUD();
    }
}
