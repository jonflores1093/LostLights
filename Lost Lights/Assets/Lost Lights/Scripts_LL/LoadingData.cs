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
            //displayScreen.text = GetText("Click and hold the arrows to orbit the moon around the earth to match the Starite's request!");
            //tutorial.text = GetText("Tutorial");
            //fall.text = GetText("Fall");
            //winter.text = GetText("Winter");
            //spring.text = GetText("Spring");
            //summer.text = GetText("Summer");
            //lunarEclipse1.text = GetText("Partial Beginning");
            //lunarEclipse2.text = GetText("Partial End");
            //lunarEclipse3.text = GetText("Penumbral Eclipse");
            //lunarEclipse4.text = GetText("Total Eclipse");
            //solarEclipsePartial1.text = GetText("First Contact");
            //solarEclipsePartial2.text = GetText("Last Contact");
            //solarEclipsePartial3.text = GetText("Maximum Partial Eclipse");
            //solarEclipsePartial4.text = GetText("Partial Eclipse");
            //solarEclipseAnnular1.text = GetText("Annularity Solar Eclipse");
            //solarEclipseAnnular2.text = GetText("First Contact");
            //solarEclipseAnnular3.text = GetText("Second Contact");
            //solarEclipseAnnular4.text = GetText("Third Contact");
            //solarEclipseAnnular5.text = GetText("Fourth Contact");
            //solarEclipseTotal1.text = GetText("First Contact");
            //solarEclipseTotal2.text = GetText("Second Contact");
            //solarEclipseTotal3.text = GetText("Third Contact");
            //solarEclipseTotal4.text = GetText("Fourth Contact");
            //solarEclipseTotal5.text = GetText("Totality Solar Eclipse");
            //facts1.text = GetText("The Earth is on a 23.5 degree tilt.");
            //facts2.text = GetText("When one hemisphere is in Summer season, the other is in Winter.");
            //facts3.text = GetText("The Earth rotates around the sun on an eliptical path.");
            //facts4.text = GetText("The Moon also rotates around the Earth on a eliptical path.");
            //facts5.text = GetText("As Earth rotates, one hemisphere will experience longer days with shorter nights while the other experiences shorter days and longer nights.");
            //facts6.text = GetText("As Earth orbits the Sun, the Northern hemisphere goes from winter to spring then summer and fall.");
            //facts7.text = GetText("As Earth orbits the Sun, the Southern hemisphere goes from summer to fall to winter to spring.");
            //facts8.text = GetText("Seasons are caused by the tilt of the Earth's axis!");
            //facts9.text = GetText("A lunar eclipse happens when the earth is between the sun and the moon causeing the earth to cast a shadow onto the moon.");
            //facts10.text = GetText("The area that completely covers the moon is called the Umbra. When the moon turns a redish color, that is when it is in the Umbra.");
            //facts11.text = GetText("The area that Earth doesnt cover the moon fully is called the Penumbra. When the moon isn't red in color, it is in the Penumbra.");
            //facts12.text = GetText("Total Lunar Eclipses are less common. As of Nov. 8th 2022, there was a total lunar eclipse. The next one to happen will be March 14th 2025!");
            //facts13.text = GetText("The Earth will experience two lunar eclipses in 2023 one of which will be a penumbral lunar eclipse on May 5th across parts of Africa Asia and Australia.");
            //facts14.text = GetText("There are 3 types of lunar eclipses: Total Lunar Eclipse, Partial Lunar Eclipse and Penumbral Lunar Eclipse.");
            //facts15.text = GetText("Total Lunar eclipse is when the Earth's Shadow is cast across the entire lunar surface.");
            //facts16.text = GetText("Partial lunar eclipse is when only part of the moon enters the Earth's shadow.");
            //facts17.text = GetText("Penumbral Lunar eclipse is when the faint outer part of the Earth's shadow is cast across the lunar surface.");
            //facts18.text = GetText("A Solar Eclipse happens when the moon is in between the Sun and Earth thus the moon casting a shadow onto the Earth.");
            //facts19.text = GetText("Solar Eclipses only occur when all three (Sun, Moon and Earth) are lined up and in the same plane.");
            //facts20.text = GetText("A total Solar Eclipse can last for several hours.");
            //facts21.text = GetText("There are 3 types of solar eclipses: Total solar eclipse, partial solar eclipse and annular solar eclipse.");
            //facts22.text = GetText("Total solar eclipse is when the sun is completely blocked by the moon. Those inside the path of a total solar eclipse will experience 'daytime darkeness' and be able to observe the Sun's corona.");
            //facts23.text = GetText("Partial solar eclipse is when the moon doesn't completely cover the sun.");
            //facts24.text = GetText("Annular solar eclipse is when the moon is centered in front of the Sun but does not fully cover the Sun's disk.");
            //facts25.text = GetText("When the Sun is bigger than the moon it is an annular solar eclipse. When the moon and sun look like the same size, it is a total solar eclipse.");




        }
        string GetText(string key)
        {
            string value = _langNode?[key];
            return value ?? "--missing--";
        }

    }
}