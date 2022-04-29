using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using UnityEngine.SceneManagement;

public class HealthCheck
{
    // A UnityTest behaves like a coroutine in Play Mode. In Edit Mode you can use
    // `yield return null;` to skip a frame.
    [OneTimeSetUp]
    public void LoadScene()
    {
        SceneManager.LoadScene("2_testLevel");
    }

    [UnityTest]
    public IEnumerator checkSheilds()
    {
        var gameObject = new GameObject();
        var ship = gameObject.AddComponent<Health>();
        ship.health--;
        yield return new WaitForSeconds(2);
        Assert.AreEqual(expected: 2, actual: ship.health);
    }
}
