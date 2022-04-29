using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class IntroState : PlayerState
{
    PlayerStateMachine stateMachine;
    public IntroState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        SceneManager.LoadScene("IntroBackground");
    }
    public void OnExit()
    {
    }
    public void LevelComplete() { }

    public void LoadLevel(string id)
    {
        stateMachine.SetState(stateMachine.GetDialogState());
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
