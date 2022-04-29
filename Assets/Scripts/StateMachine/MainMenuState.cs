using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class MainMenuState : PlayerState
{
    PlayerStateMachine stateMachine;
    public MainMenuState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        Debug.Log("Entering MainMenu State");
        SceneManager.LoadScene("MainMenuScene");
        
    }
    public void OnExit()
    {
        Debug.Log("Exiting MainMenu State");
    }
    public void LevelComplete() { }
    public void LoadLevel(string id)
    {
        Debug.Log("LoadingLevel " + id);
        stateMachine.SetState(stateMachine.GetPlayingState());
        SceneManager.LoadScene(id);
        //Player.GetInstance().SummaryValues.StartTime = DateTime.Now;
    }

    public void PauseGame() { }
    public void RecievePowerUp(int id) { }
    public void ReturnMenu() { }
    public void TakeDamage() { }
    public void CheckTime() { }
}
