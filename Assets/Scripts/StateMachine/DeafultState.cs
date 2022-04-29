using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class DefaultState : PlayerState
{
    PlayerStateMachine stateMachine;
    public DefaultState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter() { }
    public void OnExit() { }
    public void LevelComplete() { }
    public void LoadLevel(string id)
    {
        Debug.Log("LoadingLevel " + id);
        stateMachine.SetState(stateMachine.GetPlayingState());
        SceneManager.LoadScene(id);
    }
    public void PauseGame() { }
    public void RecievePowerUp(int id) { }
    public void ReturnMenu() { }
    public void TakeDamage() { }
    public void CheckTime() { }
}
