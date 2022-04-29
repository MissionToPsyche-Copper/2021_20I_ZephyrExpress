using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayyaValues : ShipContext
{
    public int rayyaShield = 10;
    public int rayyaHealth = 15;
    public float rayyaSpeed = 150f;
    public void Start()
    {
        initialShield = rayyaShield;
        initialHealth = rayyaHealth;

        initialTime = 60f;

        baseStrafingSpeed = 10f;
        baseForwardSpeed = rayyaSpeed;

        baseForwardAcceleration = 4.1f;

        boostMultiplier = 10f;
        brakeMultiplier = .1f;

        ShipModelIndex = 0;
    }
}
