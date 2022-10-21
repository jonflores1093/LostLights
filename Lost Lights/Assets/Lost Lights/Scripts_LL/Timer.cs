using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class Timer : MonoBehaviour
{
    public TMP_Text clocktxt;
    public float time = 0.0f;
    public bool isClock = false;
    public int ClockSpeedMultiplier = 162;
    public string ClockAMPM = "AM";


    //public float RawTime = 0.0F;
    //public float ClockHR = 12f;
    //public float ClockMN = 59f;

    void Start()
    {
        clocktxt = GetComponent<TMP_Text>();
    }
    public void DisplayTimeForward()
    {
        float hours = Mathf.FloorToInt(time / 60);
        float minutes = Mathf.FloorToInt((int)time - (int)hours * 60);
        if (time >= 1440)
        {
            time = 0;
        }
        if (time >= 720)
        {
            ClockAMPM = "PM";
            hours -= 12;

        }
        else
        {
            ClockAMPM = "AM";
        }

        if (hours < 1)
        {
            hours = 12;
        }

        clocktxt.text = hours.ToString("00") + ":" + minutes.ToString("00") + ClockAMPM;
    }

    public void DisplayTimeBackwards() 
    {
        float hours = Mathf.FloorToInt(time / 60);
        float minutes = Mathf.FloorToInt((int)time - (int)hours * 60);
        if (time >= 1440)
        {
            time = 0;
        }
        if (time >= 720)
        {
            ClockAMPM = "PM";
            hours -= 12;

        }
        else
        {
            ClockAMPM = "AM";
        }

        if (hours < 1)
        {
            hours = 12;
        }

        clocktxt.text = hours.ToString("00") + ":" + minutes.ToString("00") + ClockAMPM;
    }

    public void IncreaseTime() 
    {
        isClock = true;
    }

    public void PauseTime() 
    {
        isClock = false;
    }

    public void DecreaseTime() 
    {
        isClock = true;
    }

  

    
}




