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
        LoaderLL load;
        //JSONNode _langNode;
        //string _langCode = "en";

        //private const string startGameJSONFilePath_LL = "startGame1.json";
        //private const string languageJSONFilePath_LL = "language1.json";

        void Start()
        {
            DisableButton();
            Invoke("EnableButton", 10.5f);
            load = FindObjectOfType<LoaderLL>();
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
            SceneManager.LoadScene("Tutorial", LoadSceneMode.Single);
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
            load.changeClickable();
            SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
        }

        public void Back_Btn() 
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

        public void Lunar_Learning()
        {
            SceneManager.LoadScene("Lunar Learning",LoadSceneMode.Single);
        }

        public void Solar_Learning()
        {
            SceneManager.LoadScene("Solar Learning",LoadSceneMode.Single);
        }
      
        
        
    }

}