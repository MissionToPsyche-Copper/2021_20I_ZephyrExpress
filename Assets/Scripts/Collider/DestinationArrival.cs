using UnityEngine;
using UnityEngine.SceneManagement;
public class DestinationArrival: MonoBehaviour
{
    public void OnCollisionEnter(Collision c)
    {
        Debug.Log("PLANET Collided");

        //stateMachine.SetState(stateMachine.GetLevelSummary());

        //Original level change; DONT DELETE
        Player.GetInstance().StateMachine.LevelComplete();
    }
}
