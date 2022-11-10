using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Seasons : MonoBehaviour
{
    public GameObject Fall, Winter, Spring, Summer,Marker;
    public TMP_Text seasons;

  
    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.name == "Fall")
        {
            seasons.text = "Fall";

        }
        else if (other.gameObject.name == "Winter")
        {
            seasons.text = "Winter";

        }
        else if (other.gameObject.name == "Spring")
        {
            seasons.text = "Spring";
        }
        else if (other.gameObject.name == "Summer")
        {
            seasons.text = "Summer";
        }


    }
}
