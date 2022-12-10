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

        public TMP_Text newGameText, continueButton, stageSelect, fall, winter, spring, summer, counter
            , correct, tryagain, lunarLV1, lunarLV2, lunarLV3, solarLV1, solarLV2, solarLV3, displayScreen, tutorial
            , tutorialLevel, lunarEclipse1, lunarEclipse2, lunarEclipse3, lunarEclipse4, solarEclipsePartial1, solarEclipsePartial2
            , solarEclipsePartial3, solarEclipsePartial4, solarEclipsePartial5, solarEclipseAnnular1, solarEclipseAnnular2, solarEclipseAnnular3
            , solarEclipseAnnular4, solarEclipseAnnular5, solarEclipseTotal5, facts1, facts2, facts3, facts4, facts5, facts6, facts7, facts8
            , facts9, facts10, facts11, facts12, facts13, facts14, facts15, facts16, facts17, facts18, facts19, facts20, facts21, facts22, facts23
            , facts24, facts25, next, direction, textToSpeechEnable, textToSpeechDisable;


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
                counter.text = GetText("counter");
                correct.text = GetText("correct");
                tryagain.text = GetText("tryAgain");
                continueButton.text = GetText("continue");
                stageSelect.text = GetText("stageSelect");
                lunarLV1.text = GetText("lunarLV1");
                lunarLV2.text = GetText("lunarLV2");
                lunarLV3.text = GetText("lunarLV3");
                solarLV1.text = GetText("solarLV1");
                solarLV2.text = GetText("solarLV2");
                solarLV3.text = GetText("solarLV3");
                displayScreen.text = GetText("displayScreen");
                tutorial.text = GetText("tutorial");
                tutorialLevel.text = GetText("tutorial");
                fall.text = GetText("fall");
                winter.text = GetText("winter");
                spring.text = GetText("spring");
                summer.text = GetText("summer");
                lunarEclipse1.text = GetText("lunarEclipse1");
                lunarEclipse2.text = GetText("lunarEclipse2");
                lunarEclipse3.text = GetText("lunarEclipse3");
                lunarEclipse4.text = GetText("lunarEclipse4");
                solarEclipsePartial1.text = GetText("solarEclipsePartial1");
                solarEclipsePartial2.text = GetText("solarEclipsePartial2");
                solarEclipsePartial3.text = GetText("solarEclipsePartial3");
                solarEclipsePartial4.text = GetText("solarEclipsePartial4");
                solarEclipsePartial5.text = GetText("solarEclipsePartial4"); // Extra needed.
                solarEclipseAnnular1.text = GetText("solarEclipseAnnular1");
                solarEclipseAnnular2.text = GetText("solarEclipseAnnular2");
                solarEclipseAnnular3.text = GetText("solarEclipseAnnular3");
                solarEclipseAnnular4.text = GetText("solarEclipseAnnular4");
                solarEclipseAnnular5.text = GetText("solarEclipseAnnular5");
                solarEclipseTotal5.text = GetText("solarEclipseTotal5");
                facts1.text = GetText("facts1");
                facts2.text = GetText("facts2");
                facts3.text = GetText("facts3");
                facts4.text = GetText("facts4");
                facts5.text = GetText("facts5");
                facts6.text = GetText("facts6");
                facts7.text = GetText("facts7");
                facts8.text = GetText("facts8");
                facts9.text = GetText("facts9");
                facts10.text = GetText("facts10");
                facts11.text = GetText("facts11");
                facts12.text = GetText("facts12");
                facts13.text = GetText("facts13");
                facts14.text = GetText("facts14");
                facts15.text = GetText("facts15");
                facts16.text = GetText("facts16");
                facts17.text = GetText("facts17");
                facts18.text = GetText("facts18");
                facts19.text = GetText("facts19");
                facts20.text = GetText("facts20");
                facts21.text = GetText("facts21");
                facts22.text = GetText("facts22");
                facts23.text = GetText("facts23");
                facts24.text = GetText("facts24");
                facts25.text = GetText("facts25");
                next.text = GetText("next");
                direction.text = GetText("direction");

        }
        string GetText(string key)
        {
            string value = _langNode?[key];
            return value ?? "--missing--";
        }

    }
}