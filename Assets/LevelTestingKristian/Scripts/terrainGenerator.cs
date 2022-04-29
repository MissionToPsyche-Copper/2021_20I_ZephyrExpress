using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class terrainGenerator : MonoBehaviour
{
    public int width = 1000;
    public int height = 1000;
    public int depth = 20;
    public float scale = 20f;

    public float offsetX = 100f;
    public float offsetY = 100f;

    private void Start()
    {
        offsetX = Random.Range(0f, 9999f);
        offsetY = Random.Range(0f, 9999f);
    }

    private void Update()
    {
        Terrain terrain = GetComponent<Terrain>();
        terrain.terrainData = GenerateTerrain(terrain.terrainData);

        offsetX = offsetX + Time.deltaTime * 5f;

    }

    TerrainData GenerateTerrain(TerrainData terrain) {
        terrain.heightmapResolution = width + 1;
        terrain.size = new Vector3(width, depth, height);
        terrain.SetHeights(0, 0, generateHeights());
        return terrain;
    }

    float[,] generateHeights() {
        float[,] heights = new float[width, height];
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                heights[x, y] = calcHeight(x, y); 
            }
        }
        return heights;
    }

    float calcHeight(int x, int y) {
        float xCord = (float)x / width * scale + offsetX;
        float yCord = (float)y / width * scale + offsetY;

        return Mathf.PerlinNoise(xCord, yCord);
    }

}
