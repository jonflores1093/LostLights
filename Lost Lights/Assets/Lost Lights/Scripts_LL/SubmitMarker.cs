using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace InsertStudioLostLights
{ 

public class SubmitMarker : MonoBehaviour
{

    public Button submitButton;
    public TMP_Text counter;
    public float num = 8;

    void Start()
    {
            //counter.text = "Starites remaining: " + num;
    }


    public void Btn_Count()
    {

        if (Gameplay.correctAnswer == true)
        {
            num--;
            counter.text = "Starites remaining: " + num;


        }

    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "TriggerMarker")
        {
            submitButton.interactable = true;
            //Debug.Log("true");
        }

    }
    public void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.tag == "TriggerMarker")
        {
            submitButton.interactable = false;
            //Debug.Log("false");
        }
    }
}
}
