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
        //Button Transitions
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

        public void StageSelect()
        {
            SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
        }

        public void MainMenu()
        {
            SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
        }



        public void StageLunar1()
        {
            SceneManager.LoadScene("Lunar Level 1", LoadSceneMode.Single);
        }

        public void StageLunar2()
        {
            SceneManager.LoadScene("Lunar Level 2", LoadSceneMode.Single);
        }

        public void StageLunar3()
        {
            SceneManager.LoadScene("Lunar Level 3", LoadSceneMode.Single);
        }

        public void StageSolar1()
        {
            SceneManager.LoadScene("Solar Level 1", LoadSceneMode.Single);
        }

        public void StageSolar2()
        {
            SceneManager.LoadScene("Solar Level 2", LoadSceneMode.Single);
        }

        public void StageSolar3()
        {
            SceneManager.LoadScene("Solar Level 3", LoadSceneMode.Single);
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