using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SudoValues : ShipContext
{
    public int sudoShield = 3;
    public int sudoHealth = 3;
    public float sudoSpeed = 160;
    public void Start()
    {
        initialShield = sudoShield;
        initialHealth = sudoHealth;

        initialTime = 60f;

        baseStrafingSpeed = 10f;
        baseForwardSpeed = sudoSpeed;
        
        baseForwardAcceleration = 4.1f;

        boostMultiplier = 10f;
        brakeMultiplier = .1f;

        ShipModelIndex = 2;
    }
}
