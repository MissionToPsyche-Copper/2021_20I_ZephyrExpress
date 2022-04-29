using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeLevelCompleteToLevelSummary : MonoBehaviour
{
    void Start()
    {
        if (Player.GetInstance().SummaryValues.Score < 0)
            Player.GetInstance().SummaryValues.Score = 0;
    }
        void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            SceneManager.LoadScene("LevelSummary");
        }
    }
}
