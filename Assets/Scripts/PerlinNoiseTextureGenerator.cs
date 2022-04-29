using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PerlinNoiseTextureGenerator : MonoBehaviour
{
    public int width = 256;
    public int height = 256;
    public float inc = 0.01f;
    private void Start()
    {
        Renderer renderer = GetComponent<Renderer>();
        renderer.material.mainTexture = GenerateTexture();
    }
    Texture2D GenerateTexture()
    {
        Texture2D texture = new Texture2D(width, height);

        //GENERATE A PERLIN NOISE MAP FOR THE TEXTURE

        
        float yoff = 0;
        for(int x = 0; x < width; x++)
        {
            float xoff = 0;
            for (int y = 0; y < height; y++)
            {
                Color color = CalculateColor(xoff, yoff);
                texture.SetPixel(x, y, color);
                xoff += inc;
            }
            yoff += inc;
        }
        texture.Apply();
        return texture;
    }
    Color CalculateColor(float x, float y)
    {
        float sample = Mathf.PerlinNoise(x, y);
        return new Color(sample, sample, sample);
    }
}
