using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelDataInitializer
{
    ObstacleSpawner spawners = new ObstacleSpawner();
    Level5Initializer level5 = new Level5Initializer();
    public void GetLevelData()
    {
        //Debug.Log("Setting level data");
        //Debug.Log("Level:" + Player.GetInstance().DialogueState);

        switch (Player.GetInstance().DialogueState)
        {
            case 0:
                Player.GetInstance().StateMachine.Timer = 200f;
                return;
            case 1:
                Player.GetInstance().StateMachine.Health = 1;
                Player.GetInstance().StateMachine.Timer = 170f;
                return;
            case 2:
                Player.GetInstance().StateMachine.Shield = 0;
                Player.GetInstance().StateMachine.Timer = 140f;
                return;
            case 3:
                Player.GetInstance().MotionContext.BaseForwardSpeed = Player.GetInstance().MotionContext.BaseForwardSpeed * 0.75f;
                Player.GetInstance().MotionContext.BoostMultiplier = Player.GetInstance().MotionContext.BoostMultiplier * 0.75f;
                Player.GetInstance().StateMachine.Timer = 120f;
                return;
            default:
                Player.GetInstance().StateMachine.Timer = 60f;
                level5.initializeLevel5Data();
                return;
        }
    }
}
