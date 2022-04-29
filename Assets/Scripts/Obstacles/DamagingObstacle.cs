using UnityEngine;
using System.Collections;
public class DamagingObstacle : PowerUpBehavior
{
    public float shieldFlickerTime = .2f;
    public override void Activate()
    {
        float modifier = 5f;
        Player.GetInstance().StateMachine.Timer = Player.GetInstance().StateMachine.Timer - modifier;
        Player.GetInstance().StateMachine.TakeDamage();
        Player.Log("-" + modifier + " TIMER");
        //StartCoroutine(FlickerShield(shieldFlickerTime));
    }
    /*
    IEnumerator FlickerShield(float shieldFlickerTime)
    {
        var shield = GetComponentInChildren<ShieldMarker>(true).gameObject;
        shield.SetActive(true);
        yield return new WaitForSeconds(shieldFlickerTime);
        shield.SetActive(false);
    }
    */
}
