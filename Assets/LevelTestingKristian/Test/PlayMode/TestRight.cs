using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using UnityEngine.SceneManagement;

public class TestRight
{
    [OneTimeSetUp]
    public void LoadScene()
    {
        SceneManager.LoadScene("2_testLevel");
    }
    [UnityTest]
    public IEnumerator Left()
    {
        var gameObject = new GameObject();
        var ship = gameObject.AddComponent<Testing>();
        yield return new WaitForSeconds(3);
        Assert.Positive(ship.transform.position.x);
    }
}
