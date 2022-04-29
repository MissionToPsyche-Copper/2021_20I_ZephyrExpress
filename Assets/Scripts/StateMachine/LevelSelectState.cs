
using UnityEngine;
using UnityEngine.SceneManagement;
public class LevelSelectState : PlayerState
{
    PlayerStateMachine stateMachine;
    public LevelSelectState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
    }
    public void OnExit()
    {
    }
    public void LoadLevel(string id)
    {
        Debug.Log("Loading Level " + id);
        stateMachine.SetState(stateMachine.GetPlayingState());
        SceneManager.LoadScene(id);
    }
    public void ReturnMenu()
    {
        stateMachine.SetState(stateMachine.GetMainMenuState());
    }
    public void LevelComplete() { }
    public void PauseGame() { }
    public void RecievePowerUp(int id) { }
    public void TakeDamage(){ }
    public void CheckTime(){ }
}
