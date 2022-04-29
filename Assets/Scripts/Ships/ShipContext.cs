using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipContext : MonoBehaviour
{
    LevelDataInitializer levelData = new LevelDataInitializer();
    public int initialShield;
    public int initialHealth;

    public double initialTime;

    public float baseStrafingSpeed;
    public float baseForwardSpeed;

    public float baseForwardAcceleration;

    public float boostMultiplier;
    public float brakeMultiplier; 
    public int ShipModelIndex { get; set; }

    public void Initialize()
    {
        //Debug.Log("Ship model index: " + ShipModelIndex);
        Player.GetInstance().StateMachine.Shield = initialShield;
        Player.GetInstance().StateMachine.Health = initialHealth;

        //Player.GetInstance().StateMachine.Timer = initialTime;

        Player.GetInstance().MotionContext.BaseStrafingSpeed = baseStrafingSpeed;
        Player.GetInstance().MotionContext.CurrentStrafingSpeed = baseStrafingSpeed;

        Player.GetInstance().MotionContext.BaseForwardSpeed = baseForwardSpeed;
        Player.GetInstance().MotionContext.CurrentForwardSpeed = baseForwardSpeed;
        Player.GetInstance().MotionContext.ModifiedForwardSpeed = 0;

        Player.GetInstance().MotionContext.BaseForwardAcceleration = baseForwardAcceleration;

        Player.GetInstance().MotionContext.BoostMultiplier = boostMultiplier;
        Player.GetInstance().MotionContext.BrakeMultiplier = brakeMultiplier;
        levelData.GetLevelData();
    }
}
