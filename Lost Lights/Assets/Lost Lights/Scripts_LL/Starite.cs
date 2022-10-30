using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Starite : MonoBehaviour
{
    public float altitude;
    public float frequency;
    Vector3 startPos;
    public string SaveToString()
    {
        return JsonUtility.ToJson(this);
    }
    void Start()
    {
        startPos = transform.position;
    }

    void Update()
    {
        transform.position = new Vector3(startPos.x, Mathf.Sin(Time.time * frequency) * altitude + startPos.y, 0);
    }
}
