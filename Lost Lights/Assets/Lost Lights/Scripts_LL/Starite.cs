using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;
using SimpleJSON;

namespace InsertStudioLostLights
{
    public class Starite : MonoBehaviour
    {
        public float altitude;
        public float frequency;
        Vector3 startPos;

        void Start()
        {
            startPos = transform.position;
        }

        void Update()
        {
            transform.position = new Vector3(startPos.x, Mathf.Sin(Time.time * frequency) * altitude + startPos.y, 0);
        }
    }
}