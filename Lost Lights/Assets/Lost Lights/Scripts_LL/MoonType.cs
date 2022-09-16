using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoonType : MonoBehaviour
{
    
    public int moonNumber;
    private int matchMoonNumber;
    
    
    public void MatchMoon()
    {
        MoonTypeMarker compareNumber = GetComponent<MoonTypeMarker>();
        if (moonNumber == compareNumber.moonNumberMarker)
        {
            Gameplay.correctAnswer = true;

        }
    }
}
