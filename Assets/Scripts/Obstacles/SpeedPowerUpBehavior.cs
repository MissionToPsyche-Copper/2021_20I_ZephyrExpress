using System.Collections;
using UnityEngine;
public class SpeedPowerUpBehavior : PowerUpBehavior
{
    public int modifier = 100;
    public float duration = 5f;
    public override void Activate()
    {
        StartCoroutine(Boost(modifier));
        Player.Log("SPEED BOOST");
    }
    IEnumerator Boost(float modifier)
    {
        Player.GetInstance().MotionContext.ModifiedForwardSpeed += modifier;
        yield return new WaitForSeconds(duration);
        Player.GetInstance().MotionContext.ModifiedForwardSpeed -= modifier;
    }
}
