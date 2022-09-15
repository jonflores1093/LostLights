using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Counter : MonoBehaviour
{
    public TMP_Text counter;
    public float num = 8;

    void Start()
    {
        counter = GetComponent<TMP_Text>();
        counter.text = "Starites remaining: " + num;
    }


    public void Btn_Count()
    {
        num --;
        counter.text = "Starites remaining: " + num;
    }
}
