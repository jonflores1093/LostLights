using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class Timer : MonoBehaviour
{
    TMP_Text clocktxt;
    private float RawTime = 0.0F;
    private float ClockHR = 0.0F;
    private float ClockMN = 0.0F;
    private string ClockAMPM = "AM";
    private int ClockSpeedMultiplier = 1;




    void Start()
    {
        clocktxt = gameObject.GetComponent<TMP_Text>();
    }



    public void IncreaseTime() 
    {
        RawTime += Time.deltaTime * ClockSpeedMultiplier;
        ClockHR = (int)RawTime / 60;
        ClockMN = (int)RawTime - (int)ClockHR * 60;

        if (RawTime >= 1440)
        {
            RawTime = 0;
        }

        if (RawTime >= 720)
        {
            ClockAMPM = "PM";
            ClockHR -= 12;
        }
        else
        {
            ClockAMPM = "AM";
        }

        if (ClockHR < 1)
        {
            ClockHR = 12;
        }

        clocktxt.text = ClockHR.ToString("00") + ":" + ClockMN.ToString("00") + ClockAMPM;
    }

    public void DecreaseTime() 
    {
        RawTime -= Time.deltaTime * ClockSpeedMultiplier;
        ClockHR = (int)RawTime / 60;
        ClockMN = (int)RawTime - (int)ClockHR * 60;

        if (RawTime >= 1440)
        {
            RawTime = 0;
        }

        if (RawTime >= 720)
        {
            ClockAMPM = "PM";
            ClockHR -= 12;
        }
        else
        {
            ClockAMPM = "AM";
        }

        if (ClockHR < 1)
        {
            ClockHR = 12;
        }

        clocktxt.text = ClockHR.ToString("00") + ":" + ClockMN.ToString("00") + ClockAMPM;
    }

}




