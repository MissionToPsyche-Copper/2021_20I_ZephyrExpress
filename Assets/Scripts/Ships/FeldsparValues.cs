using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FeldsparValues : ShipContext
{
    public int FeldsparShield = 10;
    public int FeldsparHealth = 10;
    public float FeldsparSpeed = 50f;
    public void Start()
    {
        initialShield = FeldsparShield;
        initialHealth = FeldsparHealth;

        initialTime = 60f;

        baseStrafingSpeed = 10f;
        baseForwardSpeed = FeldsparSpeed;

        baseForwardAcceleration = 4.1f;

        boostMultiplier = 10f;
        brakeMultiplier = .1f;

        ShipModelIndex = 0;
    }
}
