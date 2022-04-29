using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class ShipSelectState : PlayerState
{
    PlayerStateMachine stateMachine;
    public ShipSelectState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        SceneManager.LoadScene("Ship Select");
    }
    public void OnExit()
    {
    }
    public void LevelComplete() { }

    public void LoadLevel(string id)
    {
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
