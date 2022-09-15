using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;

public class LLoader : MonoBehaviour
{
    private void Awake()
    {
#if UNITY_EDITOR
        ILOLSDK webGL = new LoLSDK.WebGL();
#endif
        LOLSDK.Init(webGL, "com.legends-of-learning.unity.sdk.v5.1.example-game");

    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
