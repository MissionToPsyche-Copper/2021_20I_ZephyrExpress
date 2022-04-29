using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SummaryState : PlayerState
{
    PlayerStateMachine stateMachine;
    public SummaryState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
    }
    public void OnExit()
    {
    }
    public void LevelComplete()
    {
        Debug.LogError("Bug");
    }

    public void LoadLevel(string id)
    {
        Debug.LogError("Bug");
    }

    public void PauseGame()
    {
        Debug.LogError("Bug");
    }

    public void RecievePowerUp(int id)
    {
        Debug.LogError("Bug");
    }

    public void ReturnMenu()
    {
        Debug.LogError("Bug");
    }

    public void TakeDamage()
    {
        Debug.LogError("Bug");
    }
    public void CheckTime()
    {
        if (stateMachine.HUD is null)
            Debug.LogError("StateMachine HUD not initialized");
        else
            stateMachine.HUD.SetTimerDisplay(stateMachine.Timer);
        if (stateMachine.Timer <= 0)
        {
            stateMachine.SetState(stateMachine.GetGameOverState());
        }
    }
}
