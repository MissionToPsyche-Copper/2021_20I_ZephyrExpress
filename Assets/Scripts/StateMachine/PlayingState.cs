using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class PlayingState : PlayerState
{
    PlayerStateMachine stateMachine;
    bool gameOver = false;
    public PlayingState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        Player.GetInstance().SummaryValues.StartTime = DateTime.Now;
        Player.GetInstance().SummaryValues.PowerUpCount = 0;
        gameOver = false;
        switch (Player.GetInstance().DialogueState)
        {
            case 0:
                SceneManager.LoadScene("PlayingScene");
                break;
            case 1:
                SceneManager.LoadScene("LevelTwo");
                break;
            case 2:
                SceneManager.LoadScene("LevelThree");
                break;
            case 3:
                SceneManager.LoadScene("LevelFour");
                break;
            default:
                SceneManager.LoadScene("LevelFive");
                break;
        }
       
    }
    public void OnExit()
    {

    }
    public void LevelComplete()
    {
        Player.GetInstance().SummaryValues.EndTime = DateTime.Now;
        switch (Player.GetInstance().DialogueState)
        {
            case 0: 
                SceneManager.LoadScene("LevelComplete");
                break;
            case 1:
                SceneManager.LoadScene("LevelCompete2");
                break;
            case 2:
                SceneManager.LoadScene("LevelComplete3");
                break;
            case 3:
                SceneManager.LoadScene("LevelComplete4");
                break;
            case 4:
                SceneManager.LoadScene("LevelComplete5");
                break;
            default:
                SceneManager.LoadScene("LevelComplete5");
                break;
        }
        stateMachine.SetState(stateMachine.GetLevelSelectState());
    }

    public void LoadLevel(string id) { }
    public void PauseGame()
    {
        stateMachine.SetState(stateMachine.GetPausedState());
    }

    public void RecievePowerUp(int id)
    {
        Debug.Log("Power Up " + id + " Recieved");
    }

    public void ReturnMenu()
    {
        stateMachine.SetState(stateMachine.GetMainMenuState());
    }

    public void TakeDamage()
    {
        Player.GetInstance().AudioContext.PlaySFX();
        if(stateMachine.Shield > 0)
        {
            stateMachine.Shield--;
            if (stateMachine.HUD is null)
                Debug.LogError("StateMachine HUD not initialized");
            else
                stateMachine.HUD.SetShieldDisplay(stateMachine.Shield);
        }
        else if(stateMachine.Health > 1)
        {
            stateMachine.Health--;
            if (stateMachine.HUD is null)
                Debug.LogError("StateMachine HUD not initialized");
            else
                stateMachine.HUD.SetHealthDisplay(stateMachine.Health);
        }
        else
        {
            if (gameOver) return;
            gameOver = true;
            stateMachine.Health--;
            stateMachine.HUD.SetHealthDisplay(stateMachine.Health);
            stateMachine.SetState(stateMachine.GetGameOverState());
        }
    }
    public void CheckTime()
    {
        if(stateMachine.HUD is null)
            Debug.LogError("StateMachine HUD not initialized");
        else
            stateMachine.HUD.SetTimerDisplay(stateMachine.Timer);
        if (Player.GetInstance().SummaryValues.Score < 0) Player.GetInstance().SummaryValues.Score = 0;
        if (stateMachine.Timer <= 0) {
            if (gameOver) return;
            gameOver = true;
            stateMachine.SetState(stateMachine.GetGameOverState());
        }
    }
}
