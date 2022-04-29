using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class ObstacleSpawner : MonoBehaviour
{
    public GameObject[] spaceHazards;
    public float x_Range = 1.0f;
    public float y_Range = 1.0f;
    public float minspawnTime = 1.0f;
    private float maxspawnTime = 1.0f;
    public bool disable = false;

    public bool randomRotation = true;

    public float initialVelocity;
    public void setMaxSpawnTime(float time)
    {
        maxspawnTime = time;
    }

    // Start is called before the first frame update
    void Start()
    {
        Invoke("SpawnItem", UnityEngine.Random.Range(minspawnTime, maxspawnTime));

        switch (Player.GetInstance().DialogueState)
        {
            case 0:
                setMaxSpawnTime(1.2f);
                return;
            case 1:
                setMaxSpawnTime(0.8f);
                return;
            case 2:
                setMaxSpawnTime(0.7f);
                return;
            case 3:
                setMaxSpawnTime(0.6f);
                return;
            case 4:
                setMaxSpawnTime(0.5f);
                return;
        }
    }

    // Update is called once per frame
    void SpawnItem()
    {
        if (disable) return;

        float x_Offset_f = UnityEngine.Random.Range(-Player.GetInstance().ScreenSize.x, Player.GetInstance().ScreenSize.x);
        float y_Offset_f = UnityEngine.Random.Range(-Player.GetInstance().ScreenSize.y, Player.GetInstance().ScreenSize.y);

        float scale = 3f;
        float scale_x = Player.GetInstance().ScreenSize.x/scale;
        float scale_y = Player.GetInstance().ScreenSize.y/scale;

        float x_Offset = (float)(Math.Round(x_Offset_f/scale_x)*scale_x);
        float y_Offset = (float)(Math.Round(y_Offset_f/scale_y)*scale_y);

        int Index = UnityEngine.Random.Range(0, spaceHazards.Length);

        Vector3 hazardsOffset = new Vector3(x_Offset, y_Offset, 0.0f);
        Quaternion rot = Quaternion.Euler(90f,0f,0f);

        if (randomRotation)
            rot = UnityEngine.Random.rotation;

        var hazard = Instantiate(spaceHazards[Index], transform.position + hazardsOffset, rot);
        hazard.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);

        Invoke("SpawnItem", UnityEngine.Random.Range(minspawnTime, maxspawnTime));
    }
}
