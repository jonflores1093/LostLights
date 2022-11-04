using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;

public class Startup : MonoBehaviour
{
    
    void Start()
    {
        ILOLSDK sdk = new WebGL();
        LOLSDK.Init(sdk, "MainMenu");
    }

    
}
