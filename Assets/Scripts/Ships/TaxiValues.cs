using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaxiValues : ShipContext
{
    public int taxiShield = 5;
    public int taxiHealth = 5;
    public float taxiSpeed = 100f;
    public void Start()
    {
        initialShield = taxiShield;
        initialHealth = taxiHealth;

        initialTime = 60f;

        baseStrafingSpeed = 8f;
        baseForwardSpeed = taxiSpeed;

        baseForwardAcceleration = 4.1f;

        boostMultiplier = 10f;
        brakeMultiplier = .1f;

        ShipModelIndex = 1;
    }


}

