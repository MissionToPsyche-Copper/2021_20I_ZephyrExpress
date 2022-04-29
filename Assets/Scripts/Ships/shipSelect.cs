using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;

public class shipSelect : MonoBehaviour
{
    public int index;
    private GameObject[] shipList;
    public Text shipStats;
    public GameObject taxiValues;
    private void Start()
    {
        shipList = new GameObject[transform.childCount];
        for (int i = 0; i < transform.childCount; i++) {
            shipList[i] = transform.GetChild(i).gameObject;
        }

        foreach (GameObject ship in shipList) {
            ship.SetActive(false);
        }

        if (shipList[0]) {
            shipList[0].SetActive(true);
        }
        if (Player.GetInstance().StateMachine.State is LevelSelectState) return;
        shipStats = GameObject.Find("Canvas").GetComponentInChildren<ShipStatTextMarker>().GetComponentInParent<Text>();
        displayShipStats();
    }

    public void previousShip() {
        shipList[index].SetActive(false);

        index = index - 1;
        if (index < 0) {
            index = shipList.Length - 1;
        }
        shipList[index].SetActive(true);
        displayShipStats();
    }

    public void nextShip()
    {
        shipList[index].SetActive(false);

        index = index + 1;
        if (index == shipList.Length)
        {
            index = 0;
        }

        shipList[index].SetActive(true);
        displayShipStats();
    }

    public void displayShipStats()
    {
        switch (index)
        {
            case 0:
                FeldsparValues feldSpar = new FeldsparValues();
                shipStats.text = "Ship name: " + "The Feldspar\n" + "Shields: " + feldSpar.FeldsparShield.ToString() + "\n" + "Health: " + feldSpar.FeldsparHealth.ToString() + "\n" + "Speed: " + feldSpar.FeldsparSpeed.ToString();
                return;
            case 1:
                TaxiValues taxi = new TaxiValues();
                shipStats.text = "Ship name: " + "The Taxi\n" + "Shields: " + taxi.taxiShield.ToString() + "\n" + "Health: " + taxi.taxiHealth.ToString() + "\n" + "Speed: " + taxi.taxiSpeed.ToString();
                return;
            case 2:
                SudoValues sudo = new SudoValues();
                shipStats.text = "Ship name: " + "The Sudo\n" + "Shields: " + sudo.sudoShield.ToString() + "\n" + "Health: " + sudo.sudoHealth.ToString() + "\n" + "Speed: " + sudo.sudoSpeed.ToString();
                return;
            case 3:
                RedCometValues redComet = new RedCometValues();
                shipStats.text = "Ship name: " + "The Red Comet\n" + "Shields: " + redComet.redCometShield.ToString() + "\n" + "Health: " + redComet.redCometHealth.ToString() + "\n" + "Speed: " + redComet.redCometSpeed.ToString();
                return;
            case 4:
                TValues t = new TValues();
                shipStats.text = "Ship name: " + "The Tau\n" + "Shields: " + t.tShield.ToString() + "\n" + "Health: " + t.tHealth + "\n" + "Speed: " + t.tSpeed.ToString();
                return;
        }
    }

    public void selectShip()
    {
        Player.GetInstance().ShipContext.ShipModelIndex = index;
        if(Player.GetInstance().shipSelected == false)
        {
            Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetPlayingState());
        }
        else
        {
            Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetDialogState());
        }
    }
}
