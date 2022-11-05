using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using LoLSDK;
using SimpleJSON;
using System.IO;


namespace InsertStudioLostLights
{
    public class Transitions : MonoBehaviour
    {

        public Button nextScene;
        //JSONNode _langNode;
        //string _langCode = "en";

        //private const string startGameJSONFilePath_LL = "startGame1.json";
        //private const string languageJSONFilePath_LL = "language1.json";

        void Start()
        {
            DisableButton();
            Invoke("EnableButton", 2.5f);

        }

        
        public void Continue()
        {
            //tempText.text = "Coming Soon!";
        }

        void HandleLanguageDefs(string json)
        {
            JSONNode langDefs = JSON.Parse(json);

            SharedStateLL.LanguageDefs_LL = langDefs;
        }

        public void NewGame()
        {
            SceneManager.LoadScene("StoryScene", LoadSceneMode.Single);
        }

        public void StageSelect()
        {
            SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
        }

        public void MainMenu()
        {
            SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
        }

        public void TutorialLevel()
        {
            SceneManager.LoadScene("Star falls?", LoadSceneMode.Single);
        }

        public void StageLunar1()
        {
            SceneManager.LoadScene("Lunar Landing Level 1", LoadSceneMode.Single);
        }

        public void StageLunar2()
        {
            SceneManager.LoadScene("Lunar Landing Level 2", LoadSceneMode.Single);
        }

        public void StageLunar3()
        {
            SceneManager.LoadScene("Lunar Landing Level 3", LoadSceneMode.Single);
        }

        public void StageSolar1()
        {
            SceneManager.LoadScene("Solar Salute 1", LoadSceneMode.Single);
        }

        public void StageSolar2()
        {
            SceneManager.LoadScene("Solar Salute 2", LoadSceneMode.Single);
        }

        public void StageSolar3()
        {
            SceneManager.LoadScene("Solar Salute 3", LoadSceneMode.Single);
        }

        public void Next_Scene()
        {
            SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
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
                    LOLSDK.Instance.SubmitProgress(state.score, state.currentProgress, state.maximumProgress);//change
                });

                Continue.gameObject.SetActive(true);
            }

            New_Game.gameObject.SetActive(true);
        });


    }
    }

}