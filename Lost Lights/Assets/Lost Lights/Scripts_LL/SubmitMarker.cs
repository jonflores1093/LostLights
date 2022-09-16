using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SubmitMarker : MonoBehaviour
{

    public Button submitButton;

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
