using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LoLSDK;




namespace InsertStudioLostLights
{ 
public class TextToSpeechButton : MonoBehaviour
{
        public GameObject enableAudioScript;
        public GameObject disableAudioScript;
        public LoaderLL textTS;
        

        private void Start()

        {
            textTS = FindObjectOfType<LoaderLL>();
            
        }

        public void ToggleTTS()
        {
            textTS.textToSpeech = !textTS.textToSpeech;
            if(textTS.textToSpeech == true)
            {
                enableAudioScript.SetActive(true);
                disableAudioScript.SetActive(false);
                textTS.ttsSave();



            }
            else if(textTS.textToSpeech == false)
            {
                enableAudioScript.SetActive(false);
                disableAudioScript.SetActive(true);
                textTS.ttsSave();

            }
        }

        
    }
}
