using UnityEngine;
using UnityEngine.SceneManagement;
public class DestinationHit : MonoBehaviour
{
    //[SerializeField] private GameObject ship;
    private void OnCollisionEnter(Collision collision)
    {
        //Debug.Log("Collided with " + collision.gameObject.name);
        SceneManager.LoadScene("3_levelComplete");
    }
}
