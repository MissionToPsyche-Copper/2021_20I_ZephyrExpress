using UnityEngine;
using System;
using System.Collections.Generic;
public class PlayerStateMachine : PlayerState
{
    PlayerState menu;
    PlayerState playing;
    PlayerState paused;
    PlayerState levelSelect;
    PlayerState gameOver;
    PlayerState summary;
    PlayerState shipSelect;
    PlayerState dialogSelect;
    PlayerState intro;
    List<PlayerState> states;
    public enum States
    {
         menu,
         playing,
         paused,
         levelSelect,
         gameOver,
         summary,
         shipSelect,
         dialogSelect,
         intro
    };
    public PlayerState State { get; set; }
    public PlayerState NextState { get; set; }
    public string Level { get; set; }
    public int Health { get; set; }
    public int Shield { get; set; }
    public double Timer { get; set; }
    public float Distance { get; set; }
    public float ObstacleDespawnDuration { get; set; }
    public PausedCanvasMarker PausedCanvas { get; set; }
    public ShipHUDController HUD { get; set; }
    public HUDController HUDC { get; set; }
    public static double SummaryTimer { get; set; }

    public PlayerStateMachine()
    {
        states = new List<PlayerState>();

        menu = new MainMenuState(this);
        states.Add(menu);

        playing = new PlayingState(this);
        states.Add(playing);

        paused = new PausedState(this);
        states.Add(paused);

        levelSelect = new LevelSelectState(this);
        states.Add(levelSelect);

        gameOver = new GameOverState(this);
        states.Add(gameOver);

        summary = new SummaryState(this);
        states.Add(summary);

        shipSelect = new ShipSelectState(this);
        states.Add(shipSelect);

        dialogSelect = new DialogState(this);
        states.Add(dialogSelect);

        intro = new IntroState(this);
        states.Add(intro);

        State = new DefaultState(this);

        //SetState(menu);
        //Level = "MainMenuScene";
    }
    public void Next()
    {
        OnExit(); //trigger exit event on state before transition
        State = NextState; //transition between states
        OnEnter(); //trigger enter event on state after transition
    }
    public void SetState(PlayerState newState)
    {
        
        NextState = newState;
        if (State.GetType() == NextState.GetType()) return;
        //HUDC.FadeOutAsync(Next);
        Next();
    }
    public void SetState(States s)
    {
        SetState(GetStateArray()[(int)s]);
    }
    public void SetStateExplicit(PlayerState newState)
    {
        Player.GetInstance().StateMachine.State = newState;
    }
    public void ChangeTimer(double change)
    {
        Timer -= change;
        if (Timer <= 0)
            SetState(gameOver);
    }
    public void OnEnter()
    {
        State.OnEnter();
    }
    public void OnExit()
    {
        State.OnExit();
    }
    public void ReturnMenu()
    {
        State.ReturnMenu();
    }
    public void LoadLevel(string id)
    {
        State.LoadLevel(id);
    }
    public void TakeDamage()
    {
        State.TakeDamage();
    }
    public void RecievePowerUp(int id)
    {
        State.RecievePowerUp(id);
    }
    public void LevelComplete()
    {
        State.LevelComplete();
    }
    public void PauseGame()
    {
        State.PauseGame();
    }
    public void CheckTime()
    {
        State.CheckTime();
    }
    public PlayerState GetMainMenuState() { return menu; }
    public PlayerState GetPlayingState() { return playing; }
    public PlayerState GetPausedState() { return paused; }
    public PlayerState GetLevelSelectState() { return levelSelect; }
    public PlayerState GetGameOverState() { return gameOver; }
    public PlayerState GetSummaryState() { return summary; }
    public PlayerState GetDialogState() { return dialogSelect; }
    public PlayerState GetShipSelectState() { return shipSelect; }
    public PlayerState GetIntroState() { return intro; }

    ////////////////////
    //UTILITY METHODS//
    ///////////////////
    public void UpdateHealth()
    {
        HUD.SetHealthDisplay(Health);
    }
    public void UpdateShield()
    {
        HUD.SetShieldDisplay(Shield);
    }
    public void UpdateTimer()
    {
        HUD.SetTimerDisplay(Timer);
    }
    public void UpdateSpeed()
    {
        HUD.SetSpeedDisplay(Player.GetInstance().MotionContext.CurrentForwardSpeed);
    }
    public void UpdateDistanceDisplay()
    {
        HUD.UpdateDistanceDisplay();
    }
    public void UpdateScore()
    {
        HUD.UpdateScore();
    }
    public void UpdateLevel()
    {
        HUD.UpdateLevelDisplay();
    }
    public void UpdateHUD()
    {
        UpdateHealth();
        UpdateShield();
        UpdateTimer();
        UpdateSpeed();
        UpdateDistanceDisplay();
        UpdateScore();
        UpdateLevel();
    }
    public void UpdateSummaryTime()
    {
        SummaryTimer = Timer;
        HUD.SetTimerDisplay(SummaryTimer);
    }
    public PlayerState[] GetStateArray()
    {
        return states.ToArray();
    }

}
