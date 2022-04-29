using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class KeyListener : MonoBehaviour
{
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.Escape))
        {
            Player.GetInstance().StateMachine.PauseGame();
        }
        else if (Input.GetKey(KeyCode.Space))
        {
            Player.GetInstance().MotionContext.TargetForwardSpeed = Player.GetInstance().MotionContext.BaseForwardSpeed * Player.GetInstance().MotionContext.BrakeMultiplier + Player.GetInstance().MotionContext.ModifiedForwardSpeed;
        }
        else if (Input.GetKey(KeyCode.Q))
        {
            Player.GetInstance().MotionContext.TargetForwardSpeed = Player.GetInstance().MotionContext.BaseForwardSpeed * Player.GetInstance().MotionContext.BoostMultiplier + Player.GetInstance().MotionContext.ModifiedForwardSpeed;
        }
        else
        {
            Player.GetInstance().MotionContext.TargetForwardSpeed = Player.GetInstance().MotionContext.BaseForwardSpeed + Player.GetInstance().MotionContext.ModifiedForwardSpeed;
        }
    }
}
