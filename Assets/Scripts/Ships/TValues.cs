using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TValues : ShipContext
{
    public int tShield = 4;
    public int tHealth = 4;
    public float tSpeed = 120f;
    public void Start()
    {
        initialShield = tShield;
        initialHealth = tHealth;

        initialTime = 60f;

        baseStrafingSpeed = 10f;
        baseForwardSpeed = tSpeed;

        baseForwardAcceleration = 4.1f;

        boostMultiplier = 10f;
        brakeMultiplier = .1f;

        ShipModelIndex = 4;
    }
}
