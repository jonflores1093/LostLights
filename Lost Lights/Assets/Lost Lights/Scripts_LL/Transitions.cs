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
        JSONNode _langNode;
        string _langCode = "en";

        [SerializeField] TextMeshProUGUI newGameText, continueText, stageSelectText;

        void Start()
        {
            DisableButton();
            Invoke("EnableButton", 2.5f);
            LoadData();

            LOLSDK.Instance.LanguageDefsReceived += new LanguageDefsReceivedHandler(LanguageUpdate);


            //Dont know if we need this one
            TextDisplayUpdate();
        }
       

        public void Continue()
        {
            //tempText.text = "Coming Soon!";
        }
        public void New_Game(string startGameJSON)
        {
            if (string.IsNullOrEmpty(startGameJSON))
                return;

            JSONNode startGamePayload = JSON.Parse(startGameJSON);
            _langCode = startGamePayload["languageCode"];

            SceneManager.LoadScene("StoryScene", LoadSceneMode.Single);
        }
        void LanguageUpdate(string langJSON)
        {
            if (string.IsNullOrEmpty(langJSON))
                return;

            _langNode = JSON.Parse(langJSON);
            TextDisplayUpdate();
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
        string GetText(string key)
        {
            string value = _langNode?[key];
            return value ?? "--missing--";
        }
        void TextDisplayUpdate()
        {
            stageSelectText.text = GetText("stageSelect");
            newGameText.text = GetText("newGame");
            continueText.text = GetText("continue");
            
        }

        private void LoadData()
        {

            string startDataFilePath = Path.Combine(Application.streamingAssetsPath, "startGame.json");

            if (File.Exists(startDataFilePath))
            {
                string startDataAsJSON = File.ReadAllText(startDataFilePath);
                New_Game(startDataAsJSON);
            }

            string langFilePath = Path.Combine(Application.streamingAssetsPath, "language.json");
            if (File.Exists(langFilePath))
            {
                string langDataAsJson = File.ReadAllText(langFilePath);
                var lang = JSON.Parse(langDataAsJson)[_langCode];
                LanguageUpdate(lang.ToString());
            }
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