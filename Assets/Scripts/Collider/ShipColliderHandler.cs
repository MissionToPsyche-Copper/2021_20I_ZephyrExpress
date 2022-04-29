using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EZCameraShake;

public class ShipColliderHandler : MonoBehaviour
{
    public ParticleSystem Explosion;
    public float power = 10000f;
    public float radius = 1000f;
    void OnCollisionEnter(Collision other)
    {
        if (!(Player.GetInstance().StateMachine.State is PlayingState)) return;
        //Debug.Log(other.gameObject.GetInstanceID());
        if (other.gameObject.GetComponent<PowerUpBehavior>() != null)
        {
            other.gameObject.GetComponent<PowerUpBehavior>().Activate();
            Player.UpdateHUD();
            //Destroy(other.gameObject);
            if (other.gameObject.GetComponent<DamagingObstacle>() != null)
            {
                if(Player.GetInstance().Options.ScreenShakeEffect) CameraShaker.Instance.ShakeOnce(4f, 4f, 0.1f, 1f);
                Player.GetInstance().SummaryValues.Score -= 500;
                other.collider.GetComponent<Rigidbody>().AddExplosionForce(power, transform.position, radius, -3F);
                Instantiate(Explosion, other.transform.position, Quaternion.identity); 
            }
            else
            {
                Player.GetInstance().SummaryValues.Score += 1000;
                Player.GetInstance().SummaryValues.PowerUpCount += 1;
            }
        }
        else if (other.gameObject.GetComponent<DestinationMarker>() != null)
        {
            Player.GetInstance().StateMachine.LevelComplete();
        }
    }
}
