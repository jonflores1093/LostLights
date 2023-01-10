using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using LoLSDK;
using SimpleJSON;
using System.IO;
using UnityEngine.UI;


namespace InsertStudioLostLights
{

    public class DefaultStages 
    {

        public bool tutorial = true;
        public bool lunarStage1 = false;
        public bool lunarStage2 = false;
        public bool lunarStage3 = false;
        public bool solarStage1 = false;
        public bool solarStage2 = false;
        public bool solarStage3 = false;
        public bool textToSpeechSaved = false;




    }
    public class LoaderLL : MonoBehaviour
    {
        Stages stages;
        DefaultStages defaultStages = new DefaultStages();

        public bool tutorialFT = true;
        public bool lunarStage1FT = false;
        public bool lunarStage2FT = false;
        public bool lunarStage3FT = false;
        public bool solarStage1FT = false;
        public bool solarStage2FT = false;
        public bool solarStage3FT = false;

        public bool lunar1, lunar2, lunar3, solar1, solar2, solar3;

        public bool textToSpeech = false;



        [SerializeField] Button New_Game, Continue;
        // Relative to Assets /StreamingAssets/
        private const string languageJSONFilePath = "language.json";
        private const string startGameJSONFilePath = "startGame.json";

        // Use to determine when all data is preset to load to next state.
        // This will protect against async request race conditions in webgl.
        LoLDataType _receivedData;

        // This should represent the data you're expecting from the platform.
        // Most games are expecting 2 types of data, Start and Language.
        LoLDataType _expectedData = LoLDataType.START | LoLDataType.LANGUAGE;

        [System.Flags]
        enum LoLDataType
        {
            START = 0,
            LANGUAGE = 1 << 0,
            //QUESTIONS = 1 << 1
        }

        void Awake()
        {
            

            // Create the WebGL (or mock) object
#if UNITY_EDITOR
            ILOLSDK webGL = new LoLSDK.MockWebGL();
#elif UNITY_WEBGL
        ILOLSDK webGL = new LoLSDK.WebGL();
#endif

            // Initialize the object, passing in the WebGL
            LOLSDK.Init(webGL, "com.Insert-Studio.Lost-Lights");

            // Register event handlers
            LOLSDK.Instance.StartGameReceived += new StartGameReceivedHandler(HandleStartGame);
            LOLSDK.Instance.LanguageDefsReceived += new LanguageDefsReceivedHandler(HandleLanguageDefs);
            //LOLSDK.Instance.QuestionsReceived += new QuestionListReceivedHandler(HandleQuestions);
            LOLSDK.Instance.GameStateChanged += new GameStateChangedHandler(HandleGameStateChange);

            // Mock the platform-to-game messages when in the Unity editor.
#if UNITY_EDITOR
            LoadData();
#endif

            // Then, tell the platform the game is ready.
            LoadData();
            LOLSDK.Instance.GameIsReady();
            StartCoroutine(_WaitForData());

        }

        IEnumerator _WaitForData()
        {
            yield return new WaitUntil(() => (_receivedData & _expectedData) != 0);
            SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
        }

        // Start the game here
        void HandleStartGame(string json)
        {
            SharedStateLL.StartGameData_LL = JSON.Parse(json);
            _receivedData |= LoLDataType.START;
        }


        // Use language to populate UI
        void HandleLanguageDefs(string json)
        {
            JSONNode langDefs = JSON.Parse(json);

            SharedStateLL.LanguageDefs_LL = langDefs;
            _receivedData |= LoLDataType.LANGUAGE;
        }

        // Store the questions and show them in order based on your game flow.
        //void HandleQuestions(MultipleChoiceQuestionList questionList)
        //{
        //    Debug.Log("HandleQuestions");
        //    SharedState.QuestionList = questionList;
        //    _receivedData |= LoLDataType.QUESTIONS;
        //}

        // Handle pause / resume
        void HandleGameStateChange(GameState gameState)
        {
            // Either GameState.Paused or GameState.Resumed
            Debug.Log("HandleGameStateChange");
        }

        private void LoadData()
        {
#if UNITY_EDITOR
            // Load Dev Language File from StreamingAssets

            string startDataFilePath = Path.Combine(Application.streamingAssetsPath, startGameJSONFilePath);
            string langCode = "en";

            Debug.Log(File.Exists(startDataFilePath));

            if (File.Exists(startDataFilePath))
            {
                string startDataAsJSON = File.ReadAllText(startDataFilePath);
                JSONNode startGamePayload = JSON.Parse(startDataAsJSON);
                // Capture the language code from the start payload. Use this to switch fonts
                langCode = startGamePayload["languageCode"];
                HandleStartGame(startDataAsJSON);
            }

            // Load Dev Language File from StreamingAssets
            string langFilePath = Path.Combine(Application.streamingAssetsPath, languageJSONFilePath);
            if (File.Exists(langFilePath))
            {
                string langDataAsJson = File.ReadAllText(langFilePath);
                // The dev payload in language.json includes all languages.
                // Parse this file as JSON, encode, and stringify to mock
                // the platform payload, which includes only a single language.
                JSONNode langDefs = JSON.Parse(langDataAsJson);
                // use the languageCode from startGame.json captured above
                HandleLanguageDefs(langDefs[langCode].ToString());
            }
#endif
        }
        void Start()
        {
            
            stages = FindObjectOfType<Stages>();
            HelperLL.StateButtonInitialize<DefaultStages>(New_Game, Continue, OnLoad);
            


        }
         void Save()
        {
            LOLSDK.Instance.SaveState(defaultStages);
            Debug.Log("Saved");
        }

         public void ttsSave()
        {
            defaultStages.textToSpeechSaved = textToSpeech;
            LOLSDK.Instance.SaveState(defaultStages);
            Debug.Log("Saved");
        }
        void OnLoad(DefaultStages stagesSave)
        {
            if (stagesSave != null)
                defaultStages = stagesSave;
           
            SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);

        }

        public void changeClickable()
        {
            Scene scene = SceneManager.GetActiveScene();

            if (scene.name == ("Tutorial"))
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true");
                defaultStages.lunarStage1 = true;

                stages.lunarStage1 = true;
                if (tutorialFT == false)
                {
                    LOLSDK.Instance.SubmitProgress(1, 1, 8);
                    tutorialFT = true;
                }
                else
                {
                    LOLSDK.Instance.SubmitProgress(1, 1, 8);
                }

                Save();
                
            }
            else if (scene.name == "Lunar Landing Level 1")
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true1");
                defaultStages.lunarStage2 = true;
                
                stages.lunarStage2 = true;
                if (lunarStage1FT == false)
                {
                    LOLSDK.Instance.SubmitProgress(2, 2, 8);
                    lunarStage1FT = true;
                }
                else
                {

                }


                Save();

            }
            else if (scene.name == "Lunar Landing Level 2")
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true2");
                defaultStages.lunarStage3 = true;
                
                stages.lunarStage3 = true;
                if (lunarStage2FT == false)
                {
                    LOLSDK.Instance.SubmitProgress(3, 3, 8);
                    lunarStage2FT = true;
                }
                else
                {

                }


                Save();
            }
            else if (scene.name == "Lunar Landing Level 3")
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true3");
                defaultStages.solarStage1 = true;
                
                stages.solarStage1 = true;
                if (lunarStage3FT == false)
                {
                    LOLSDK.Instance.SubmitProgress(4, 4, 8);
                    lunarStage3FT = true;
                }
                else
                {

                }

                Save();

            }
            else if (scene.name == "Solar Salute 1")
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true4");
                defaultStages.solarStage2 = true;
                
                stages.solarStage2 = true;

                if (solarStage1FT == false)
                {
                    LOLSDK.Instance.SubmitProgress(5, 5, 8);
                    solarStage1FT = true;
                }
                else
                {
                    
                }

                Save();

            }
            else if (scene.name == "Solar Salute 2")
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true5");
                defaultStages.solarStage3 = true;
                
                stages.solarStage3 = true;
                if (solarStage2FT == false)
                {
                    LOLSDK.Instance.SubmitProgress(6, 6, 8);
                    solarStage2FT = true;
                }
                else
                {
                    
                }

                Save();

            }
            else if (scene.name == "Solar Salute 3")
            {
                SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);
                Debug.Log("Set to true5");
                //defaultStages.solarStage3 = true;

                stages.solarStage3 = true;

                if (solarStage3FT == false)
                {
                    LOLSDK.Instance.SubmitProgress(8, 8, 8);
                    solarStage3FT = true;
                    LOLSDK.Instance.CompleteGame();
                }
                else
                {
                    LOLSDK.Instance.SubmitProgress(8, 8, 8);
                    //solarStage3FT = true;
                }

                Save();

            }

        }
    }
}
