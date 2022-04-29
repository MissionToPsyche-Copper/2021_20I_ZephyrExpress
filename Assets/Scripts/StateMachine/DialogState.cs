using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class DialogState : PlayerState
{
    PlayerStateMachine stateMachine;
    public DialogState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        SceneManager.LoadScene("LevelOneIntroScene");
    }
    public void OnExit()
    {
    }
    public void LevelComplete() { }

    public void LoadLevel(string id)
    {
        Player.GetInstance().SummaryValues.Score = 0;
        Player.GetInstance().SummaryValues.StartTime = DateTime.Now;
        Player.GetInstance().SummaryValues.PowerUpCount = 0;
        Debug.Log("LoadingLevel " + id);
        stateMachine.SetState(stateMachine.GetPlayingState());
        SceneManager.LoadScene(id);
    }

    public void PauseGame() { }

    public void RecievePowerUp(int id) { }
    public void ReturnMenu()
    {
        stateMachine.SetState(stateMachine.GetMainMenuState());
    }
    public void TakeDamage() { }
    public void CheckTime() { }
}
