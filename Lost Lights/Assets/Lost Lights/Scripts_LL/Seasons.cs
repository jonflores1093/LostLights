using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Seasons : MonoBehaviour
{
    public GameObject Fall, Winter, Spring, Summer,Marker;
    public TMP_Text seasons;

    void Start()
    {
        Fall = GetComponent<GameObject>();
        Winter = GetComponent<GameObject>();
        Spring = GetComponent<GameObject>();
        Summer = GetComponent<GameObject>();
        Marker = GetComponent<GameObject>();
    }
    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject == Marker)
        {
            Debug.Log("Fall");

        }


    }
}
