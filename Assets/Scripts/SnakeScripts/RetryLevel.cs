using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class RetryLevel : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public bool buttonPressed;

    public void OnPointerDown(PointerEventData eventData)
    {
        buttonPressed = true;
        //SceneManager.LoadScene(MainMenuScene);
        Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetPlayingState());
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        buttonPressed = false;
    }
}

