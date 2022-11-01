using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;
using SimpleJSON;

public class MoonType : MonoBehaviour
{
    public int moonNumber;
    public string SaveToString()
    {
        return JsonUtility.ToJson(this);
    }
}
