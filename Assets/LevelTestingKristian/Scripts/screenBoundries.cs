using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class screenBoundries : MonoBehaviour
{
    private Vector2 screenBound;
    private float objWidth = 0.5f;
    private float objHeight = 0.5f;
    // Start is called before the first frame update
    void Start()
    {
        screenBound = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width , Screen.height, Camera.main.transform.position.z));
    }
    // LateUpdate called after shipmovement script
    void LateUpdate()
    {
        Vector3 viewPoint = transform.position;
        viewPoint.x = Mathf.Clamp(viewPoint.x, screenBound.x + objWidth, -(screenBound.x) - objWidth);
        viewPoint.y = Mathf.Clamp(viewPoint.y, screenBound.y + objHeight, -(screenBound.y) - objHeight);
        transform.position = viewPoint;
    }
}
