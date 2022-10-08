using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace InsertStudioLostLights
{
    public class ScrollingBackground : MonoBehaviour
    {
        [SerializeField] private RawImage bg;
        [SerializeField] private float _x, _y;

        
        

        void Update()
        {
            bg.uvRect = new Rect(bg.uvRect.position + new Vector2(_x, _y) * Time.deltaTime, bg.uvRect.size);
        }
    }
}