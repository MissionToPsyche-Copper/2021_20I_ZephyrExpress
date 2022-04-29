using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawnerV2 : MonoBehaviour
{
    [SerializeField] private GameObject[] spaceHazards;
    [SerializeField] private float x_Range = 1.0f;
    [SerializeField] private float y_Range = 1.0f;
    [SerializeField] private float minspawnTime = 1.0f;
    [SerializeField] private float maxspawnTime = 7.0f;
    public int disable = 0;

    // Start is called before the first frame update
    void Start()
    {
        Invoke("SpawnItem", Random.Range(minspawnTime, maxspawnTime));
    }

    // Update is called once per frame
    void SpawnItem()
    {
        if (disable == 0)
        {
            float x_Offset = Random.Range(-x_Range, x_Range);
            float y_Offset = Random.Range(-y_Range, y_Range);
            int Index = Random.Range(0, spaceHazards.Length);
            Vector3 hazardsOffset = new Vector3(x_Offset, y_Offset, 0.0f);

            Instantiate(spaceHazards[Random.Range(0, spaceHazards.Length)], transform.position + hazardsOffset, spaceHazards[Index].transform.rotation);
            Invoke("SpawnItem", Random.Range(minspawnTime, maxspawnTime));
        }
    }
}
