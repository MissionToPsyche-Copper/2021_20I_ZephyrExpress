using UnityEngine;
using UnityEngine.SceneManagement;
public class GameOverState : PlayerState
{
    PlayerStateMachine stateMachine;
    public GameOverState(PlayerStateMachine newStateMachine)
    {
        stateMachine = newStateMachine;
    }
    public void OnEnter()
    {
        Debug.Log("Entering GameOver State");
        Player.GetInstance().StateMachine.HUD.GameOver();
    }
    public void OnExit()
    {
        Debug.Log("Exiting GameOver State");
    }
    public void LevelComplete() { }

    public void LoadLevel(string id)
    {
        Debug.Log("Loading Level " + id);
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
