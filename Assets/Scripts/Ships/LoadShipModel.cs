using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadShipModel : MonoBehaviour
{
    public GameObject[] shipList;
    // Start is called before the first frame update
    void Start()
    {
        var index = Player.GetInstance().ShipContext.ShipModelIndex;
        var model = GetComponentInChildren<ShipSelectionMarker>().transform.GetChild(index);
        GetComponentInChildren<ShipSelectionMarker>().transform.GetChild(0).gameObject.SetActive(false);
        var ship = Instantiate(model, GetComponentInChildren<ShipSelectionMarker>().transform.position, Quaternion.identity);
        ship.gameObject.transform.parent = GetComponentInChildren<ShipSelectionMarker>().gameObject.transform;
        ship.GetComponent<RotateShip>().doRotate = false;
        //ship.localScale = ship.localScale * .5f;
        if (Player.GetInstance().StateMachine.State is LevelSelectState)
            ship.gameObject.SetActive(false);
        else
            ship.gameObject.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
