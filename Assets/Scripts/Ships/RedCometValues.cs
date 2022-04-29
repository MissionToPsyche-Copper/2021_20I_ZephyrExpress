using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedCometValues : ShipContext
{
    public int redCometHealth = 3;
    public int redCometShield = 2;
    public float redCometSpeed = 200f;
    public void Start()
    {
        initialShield = redCometShield;
        initialHealth = redCometHealth;

        initialTime = 60f;

        baseStrafingSpeed = 10f;
        baseForwardSpeed = redCometSpeed;

        baseForwardAcceleration = 4.1f;

        boostMultiplier = 10f;
        brakeMultiplier = .1f;

        ShipModelIndex = 3;
    }
}
