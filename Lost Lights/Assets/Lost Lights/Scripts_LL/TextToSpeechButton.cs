using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LoLSDK;




namespace InsertStudioLostLights
{ 
public class TextToSpeechButton : MonoBehaviour
{
        public GameObject audioScript;
        LoaderLL textTS;

        private void Start()

        {
            textTS = FindObjectOfType<LoaderLL>();
            
        }

        public void ToggleTTS()
        {
            textTS.textToSpeech = !textTS.textToSpeech;
            if(textTS.textToSpeech == true)
            {
                audioScript.SetActive(true);
            }
            else
            {
                audioScript.SetActive(false);
            }
        }

        
    }
}
