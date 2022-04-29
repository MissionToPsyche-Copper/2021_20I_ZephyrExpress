using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
public class meshGenerate : MonoBehaviour
{
    Mesh mesh;
    
    Vector3[] vertices;
    int[] triangles;

    //Vertex count = (xSize+1)*(zSize+1)
    public int xSize = 20;
    public int zSize = 20;

    // Start is called before the first frame update
    void Start()
    {
        mesh = new Mesh();
        GetComponent<MeshFilter>().mesh = mesh;
        createShape();
        updateMesh();
    }

    public void createShape() {
        vertices = new Vector3[(xSize + 1) * (zSize + 1)];
        for (int i=0, z = 0; z <= zSize; z++) {
            for (int x = 0; x <= xSize; x++) {
                float y1 = Mathf.PerlinNoise(x * .3f, z * .3f) * 2f;
                float y2 = Mathf.PerlinNoise(x * .3f, z * .3f) * 8f;

                float y = Mathf.Clamp(y1, y2, 10);

                vertices[i] = new Vector3(x, y, z);
                i++;
            }
        }

        int vert = 0;
        int tri = 0;
        triangles = new int[xSize * zSize * 6];

        for (int z = 0; z < zSize; z++) {
            for (int x = 0; x < xSize; x++)
            {
                triangles[0 + tri] = vert + 0;
                triangles[1 + tri] = vert + xSize + 1;
                triangles[2 + tri] = vert + 1;
                triangles[3 + tri] = vert + 1;
                triangles[4 + tri] = vert + xSize + 1;
                triangles[5 + tri] = vert + xSize + 2;

                vert++;
                tri += 6;
            }
            vert++;
        }

    }

    public void updateMesh() {
        mesh.Clear();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.RecalculateNormals();
    }
   /* private void OnDrawGizmos()
    {
        if (vertices == null) {
            return;
        }
        for (int i = 0; i < vertices.Length; i++) {
            Gizmos.DrawSphere(vertices[i], .1f);
        }
    }
   */
}
