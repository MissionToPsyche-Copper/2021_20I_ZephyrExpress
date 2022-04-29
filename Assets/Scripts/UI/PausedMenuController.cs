using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PausedMenuController : MonoBehaviour
{
    public void Resume()
    {
        Player.GetInstance().StateMachine.PauseGame();
    }
    public void MainMenu()
    {
        Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetMainMenuState());
        Player.GetInstance().DialogueState = 0;
    }
}
