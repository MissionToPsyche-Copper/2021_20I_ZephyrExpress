using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayerForward : MonoBehaviour
{
    void Update()
    {
        //controls acceleration of the ship
        if(Player.GetInstance().MotionContext.CurrentForwardSpeed < Player.GetInstance().MotionContext.TargetForwardSpeed)
            Player.GetInstance().MotionContext.CurrentForwardSpeed += Player.GetInstance().MotionContext.BaseForwardAcceleration * Time.deltaTime;
        else if (Player.GetInstance().MotionContext.CurrentForwardSpeed > Player.GetInstance().MotionContext.TargetForwardSpeed)
            Player.GetInstance().MotionContext.CurrentForwardSpeed -= Player.GetInstance().MotionContext.BaseForwardAcceleration * Time.deltaTime;
        transform.position += transform.forward * Player.GetInstance().MotionContext.CurrentForwardSpeed * Time.deltaTime;

        //controls speed and number of particles
        //GetComponentInChildren<ParticleSystem>().startSpeed = Player.GetInstance().MotionContext.CurrentForwardSpeed;
        //GetComponentInChildren<ParticleSystem>().startLifetime = Player.GetInstance().MotionContext.CurrentForwardSpeed/10;

        //TODO
        //PID Controller
    }

}
