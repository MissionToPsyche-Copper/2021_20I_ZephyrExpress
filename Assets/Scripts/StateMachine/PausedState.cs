using UnityEngine;
using UnityEngine.SceneManagement;
public class PausedState : PlayerState
{
    PlayerStateMachine stateMachine;
    public PausedState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        Debug.Log("Game Paused");
        if (!(stateMachine.PausedCanvas is null))
            stateMachine.PausedCanvas.gameObject.SetActive(true);
       // Player.GetInstance().StateMachine.HUD.SetPauseActive(true);
        Time.timeScale = 0f;
    }
    public void OnExit()
    {
        Debug.Log("Unpaused");
        if (!(stateMachine.PausedCanvas is null))
            stateMachine.PausedCanvas.gameObject.SetActive(false);
        Time.timeScale = 1f;
        Debug.Log(Player.GetInstance().StateMachine.PausedCanvas);
        //Player.GetInstance().StateMachine.HUD.SetPauseActive(false);
    }
    
    public void PauseGame()
    {
        OnExit();
        stateMachine.SetStateExplicit(stateMachine.GetPlayingState());
    }

    public void RecievePowerUp(int id){}

    public void ReturnMenu()
    {
        stateMachine.SetState(stateMachine.GetMainMenuState());
    }
    public void TakeDamage()
    {
        Debug.LogError("Cannot Do that from Pause Menu");
    }

    //Unused
    public void LoadLevel(string id) {}
    public void LevelComplete() {}
    public void CheckTime(){}
}
