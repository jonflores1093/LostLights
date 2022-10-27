using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using LoLSDK;



namespace InsertStudioLostLights
{
    public class Transitions : MonoBehaviour
    {
        public TMP_Text tempText;
        public Button nextScene;
        //Button Transitions

        void Start()
        {
            DisableButton();
            Invoke("EnableButton", 5f);


        }
        public void New_Game()
        {
            SceneManager.LoadScene("Level 1", LoadSceneMode.Single);
        }

        public void Continue()
        {
            tempText.text = "Coming Soon!";
        }

        public void Options()
        {
            tempText.text = "Coming Soon!";
        }

        public void Next_Scene() 
        {
            SceneManager.LoadScene("");
        }

        void EnableButton()
        {
            nextScene.interactable = true;

        }
        void DisableButton()
        {
            nextScene.interactable = false;

        }

        public static void StateButtonInitialize<T>(Button New_Game, Button Continue, System.Action<T> callback)
            where T : class
    {
        // Invoke callback with null to use the default serialized values of the state data from the editor.
        New_Game.onClick.AddListener(() =>
        {
            New_Game.gameObject.SetActive(false);
            Continue.gameObject.SetActive(false);
            callback(null);
        });

        // Hide while checking for data.
        New_Game.gameObject.SetActive(false);
        Continue.gameObject.SetActive(false);
        // Check for valid state data, from server or fallback local ( PlayerPrefs )
        LOLSDK.Instance.LoadState<T>(state =>
        {
            if (state != null)
            {
                // Hook up and show continue only if valid data exists.
                Continue.onClick.AddListener(() =>
                {
                    New_Game.gameObject.SetActive(false);
                    Continue.gameObject.SetActive(false);
                    callback(state.data);
                    // Broadcast saved progress back to the teacher app.
                    LOLSDK.Instance.SubmitProgress(state.score, state.currentProgress, state.maximumProgress);
                });

                Continue.gameObject.SetActive(true);
            }

            New_Game.gameObject.SetActive(true);
        });
    }
    }

}