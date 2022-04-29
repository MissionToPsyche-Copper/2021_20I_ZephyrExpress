using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

public class ControlTest
{
    // A Test behaves as an ordinary method
    [Test]

    public void playerMove()
    {
        var gameObject = new GameObject();
        var ship = gameObject.AddComponent<Testing>();

        //ship.currentSpeed = 5;
        Assert.AreEqual(expected: 5, actual: ship.currentSpeed);

    }
}
