using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LoLSDK;
using System;
using UnityEngine.SceneManagement;
using TMPro;
using System.Runtime.InteropServices;
using SimpleJSON;
using UnityEngine.Networking;


namespace InsertStudioLostLights
{
    public class InvokeTextToSpeech : MonoBehaviour
    {

        AudioSource _ttsAudioSource;
        
        public string textKey;

        public LoaderLL ttsBool;
        

        private void Awake()
        {
            //textKey = gameObject.GetComponentInParent<TextMeshProUGUI>();
            textKey = this.name;
            _ttsAudioSource = gameObject.AddComponent<AudioSource>();
            ttsBool = FindObjectOfType<LoaderLL>();
        }
        void Start()
        {
            if(ttsBool.textToSpeech == true)
            {
                string languageCode = SharedStateLL.StartGameData_LL["languageCode"];
                string text = SharedStateLL.LanguageDefs_LL[textKey];
                // Stop any current tts.
                _ttsAudioSource.Stop();
                // Speak the clip of text requested from using this MonoBehaviour as the coroutine owner.


                LOLSDK.Instance.SpeakText(text);

                // this might fix the text to speech issue, will try this later.
                //LOLSDK.Instance.SpeakText(SharedStateLL.LanguageDefs_LL[textKey]);


                //((ILOLSDK_EDITOR)LOLSDK.Instance.PostMessage).SpeakText(text,
                //    clip => { _ttsAudioSource.clip = clip; _ttsAudioSource.Play(); },
                //    this,
                //    languageCode);
            }
            else
            {

            }
            


        }



    }
}
