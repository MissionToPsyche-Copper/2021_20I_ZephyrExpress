using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level5Initializer : MonoBehaviour
{
    GameObject[] moonBases;
    int randomBase;
    public void initializeLevel5Data()
    {
        moonBases = new GameObject[GameObject.Find("moonBaseList").transform.childCount];

        for (int i = 0; i < moonBases.Length; i++)
        {
            moonBases[i] = GameObject.Find("moonBaseList").transform.GetChild(i).gameObject;
            moonBases[i].SetActive(false);
        }
        randomBase = UnityEngine.Random.Range(0, 3);
        Debug.Log("random base: " + randomBase);
        moonBases[randomBase].SetActive(true);
    }
}
