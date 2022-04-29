using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class shipSelect : MonoBehaviour
{
    private int index;
    private GameObject[] shipList;
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


    }

    public void previousShip() {
        shipList[index].SetActive(false);

        index = index - 1;
        if (index < 0) {
            index = shipList.Length - 1;
        }

        shipList[index].SetActive(true);
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
    }

    public void selectShip()
    {
        SceneManager.LoadScene("LevelOneIntroScene");
    }
}
