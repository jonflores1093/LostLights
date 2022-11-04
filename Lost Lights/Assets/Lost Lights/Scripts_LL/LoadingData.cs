using System.Collections;
using System.Collections.Generic;
using LoLSDK;
using System.IO;
using SimpleJSON;
using UnityEngine;
using TMPro;

namespace InsertStudioLostLights
{
    public class LoadingData : MonoBehaviour
    {
        JSONNode _langNode;
        string _langCode = "en";

        public TMP_Text newGameText;


        private void Start()
        {
            LoadMockData();
        }
        private void LoadMockData()
        {
            // Load Dev Language File from StreamingAssets

            string startDataFilePath = Path.Combine(Application.streamingAssetsPath, "startGame.json");

            if (File.Exists(startDataFilePath))
            {
                string startDataAsJSON = File.ReadAllText(startDataFilePath);
                StartGame(startDataAsJSON);
            }

            // Load Dev Language File from StreamingAssets
            string langFilePath = Path.Combine(Application.streamingAssetsPath, "language.json");

            if (File.Exists(langFilePath))
            {
                string langDataAsJson = File.ReadAllText(langFilePath);
                var lang = JSON.Parse(langDataAsJson)[_langCode];
                LanguageUpdate(lang.ToString());
            }


        }
        void StartGame(string startGameJSON)
        {
            if (string.IsNullOrEmpty(startGameJSON))
                return;

            JSONNode startGamePayload = JSON.Parse(startGameJSON);
            // Capture the language code from the start payload. Use this to switch fonts
            _langCode = startGamePayload["languageCode"];
        }
        void LanguageUpdate(string langJSON)
        {
            if (string.IsNullOrEmpty(langJSON))
                return;

            _langNode = JSON.Parse(langJSON);

            TextDisplayUpdate();
        }
        void TextDisplayUpdate()
        {

            newGameText.text = GetText("newGame");
            //counter.text = GetText("Starites remaining: ");
            //correct.text = GetText("Correct!");
            //tryagain.text = GetText("Try Again");
            //continueButton.text = GetText("Continue");
            //stageSelect.text = GetText("Stage Select");
            //lunarLV1.text = GetText("lunar level 1");
            //lunarLV2.text = GetText("lunar level 2");
            //lunarLV3.text = GetText("lunar level 3");
            //solarLV1.text = GetText("solar level 1");
            //solarLV2.text = GetText("solar level 2");
            //solarLV3.text = GetText("solar level 3");



        }
        string GetText(string key)
        {
            string value = _langNode?[key];
            return value ?? "--missing--";
        }

    }
}