using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour
{
    public GameObject Tips;
    public void PlayGame()
    {
        //Player.GetInstance().StateMachine.LoadLevel("PlayingScene");
        Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetIntroState());
    }
    public void ToggleTips()
    {
        Tips.gameObject.SetActive(!Tips.gameObject.activeSelf);
    }
}
