using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Linq;
public class Introbackground : MonoBehaviour
{
    public GameObject tips;
    public void Start()
    {
        //tips = GameObject.Find("TipsCanvas");
       //tips.SetActive(false);
    }
    public void ContinueGame()
    {
        //Player.GetInstance().StateMachine.LoadLevel("PlayingScene");
        Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetDialogState());
    }
    public void ShowTips()
    {
        //tips.SetActive(true);
    }
    public void Button1Click()
    {
        //ShowTips();
    }
}
