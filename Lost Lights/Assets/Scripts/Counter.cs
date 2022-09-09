using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Counter : MonoBehaviour
{
    public Text counter;
    public float num = 8;

    void Start()
    {
        counter = GetComponent<Text>();
        counter.text = "Starites remaining: " + num;
    }


    public void Btn_Count()
    {
        num --;
        counter.text = "Starites remaining: " + num;
    }
}
