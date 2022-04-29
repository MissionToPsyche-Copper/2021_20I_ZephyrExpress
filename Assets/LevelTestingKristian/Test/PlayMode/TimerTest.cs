using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.TestTools;
using UnityEngine.UI;


public class TimerTest
{
    [OneTimeSetUp]
    public void LoadScene()
    {
        SceneManager.LoadScene("2_testLevel");
    }

    [UnityTest]
    public IEnumerator TimerTestWithEnumeratorPasses()
    {
        double timeElapsed = 20f;
        double range = .001f;
        int timesCalled = 3;
        int numOfCollisions = 0;
        var timerObject = new GameObject();
        var timer = timerObject.AddComponent<Timer>();
        var collisionObject = new GameObject();
        var collision = collisionObject.AddComponent<CollisionEnterTest>();
        for(int i = 0; i < timesCalled; i++)
        {
            collision.updateValuesOnCollision();
            numOfCollisions = collision.numberOfcollisions;
        }
        double final = timer.currentTime - timeElapsed - (double)(numOfCollisions * collision.timerChange);
        yield return new WaitForSeconds((float)timeElapsed);
        double current = timer.currentTime - (double)(numOfCollisions * collision.timerChange);
        Assert.That(final, Is.EqualTo(current).Within(range));
    }
}
