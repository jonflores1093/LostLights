using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using LoLSDK;
using SimpleJSON;

namespace InsertStudioLostLights
{

    public class SubmitMarker : MonoBehaviour
    {
        
        public Button submitButton, hintBtn, retryBtn, beginBtn, speechBtn, displayBtn, factBtn, arrowBtn, subBtn, endingBtn;      
        public TMP_Text counter, correct, tryagain, seasons, displayScreenText;
        public float staritesRemaining = 8;
      
        public int markerNumber, count;
        public bool correctAnswer;
        public GameObject moon, Fall, Winter, Spring, Summer, starrite, fact;
        public int moonNumber;

        NewQuestions changeQuestion;
        FactsManager changeFacts;
        LoaderLL load;

        [SerializeField] AudioClip audioCorrect;
        [SerializeField] AudioClip audioWrong;
        AudioSource audioSourceCorrect;
        AudioSource audioSourceWrong;
        [SerializeField] [Range(0.0f, 1.0f)] float audioCorrectVolume = 1;
        [SerializeField] [Range(0.0f, 1.0f)] float audioWrongVolume = 1;

        //Canvas Mechanics
        public MechanicScreen endScreen;

        public GameObject answerCorrect;
        public GameObject answerWrong;



        private void Awake()
        {
            // AUDIO
            audioSourceCorrect = gameObject.AddComponent<AudioSource>();
            if (audioCorrect != null)
                audioSourceCorrect.clip = audioCorrect;
            audioSourceCorrect.volume = audioCorrectVolume;
            audioSourceCorrect.playOnAwake = false;

            audioSourceWrong = gameObject.AddComponent<AudioSource>();
            if (audioWrong != null)
                audioSourceWrong.clip = audioWrong;
            audioSourceWrong.volume = audioWrongVolume;
            audioSourceWrong.playOnAwake = false;

        }
        void Start()
        {
            Button btn = submitButton.GetComponent<Button>();
            btn.onClick.AddListener(TaskOnClick);

            counter.text = "Starites remaining: " + staritesRemaining;

            if (moon == null)
            {
                moon = GameObject.FindWithTag("Moon");
                moonNumber = moon.GetComponent<MoonType>().moonNumber;
            }
            if (starrite == null)
            {
                starrite = GameObject.FindWithTag("Starrite");
            }
            if (fact == null)
            {
                fact = GameObject.FindWithTag("Fact");
            }
            // Find the script to use
            changeQuestion = FindObjectOfType<NewQuestions>();
            changeFacts = FindObjectOfType<FactsManager>();
            load = FindObjectOfType<LoaderLL>();
            
        }

         
        void TaskOnClick()
        {
            MatchMoon();

            if (correctAnswer == true)
            {
                staritesRemaining--;
                counter.text = "Starites remaining: " + staritesRemaining;
                if (staritesRemaining == 0)
                {
                    //endScreen.gameObject.SetActive(true);
                    EnableEndBtn();
                    Debug.Log("Game Over!");
                }
                else
                {
                    Object.Destroy(moon);
                    Object.Destroy(starrite);
                    Object.Destroy(fact);
                    changeQuestion.RandomQuestion();
                    changeFacts.RandomFact();
                    Invoke("UpdateMoon", 1.5f);
                    DisableButton();
                    Invoke("EnableButton", 1.5f);
                }
                


                // Add animation or good job box

            }
            //if (staritesRemaining == 0) 
            //{
            //    //endScreen.gameObject.SetActive(true);
            //    load.changeClickable();
            //    Debug.Log("Game Over!");
            //}
           
        }

        void UpdateMoon()
        {
            moon = GameObject.FindWithTag("Moon");
            starrite = GameObject.FindWithTag("Starrite");
            fact = GameObject.FindWithTag("Fact");
            moonNumber = moon.GetComponent<MoonType>().moonNumber;    
        }

        void EnableButton()
        {
            submitButton.interactable = true;

        }
        void DisableButton()
        {
            submitButton.interactable = false;
            
        }
        void EnableHint() 
        {
            hintBtn.gameObject.SetActive(true);
        }

       public void DisableHint() 
        {
            hintBtn.gameObject.SetActive(false);
        }

        void EnableRetry() 
        {
            retryBtn.gameObject.SetActive(true);
        }

        public void Retry() 
        {
            SceneManager.LoadScene("Stage Select");


        }
        public void DisableBeginBtn()
        {
            beginBtn.gameObject.SetActive(false);
        }
        public void EnableSpeechBtn()
        {
            speechBtn.gameObject.SetActive(true);
        }
        public void DisableSpeechBtn()
        {
            speechBtn.gameObject.SetActive(false);
        }
        public void EnableDisplayBtn()
        {
            displayBtn.gameObject.SetActive(true);
        }
        public void DisableDisplayBtn()
        {
            displayBtn.gameObject.SetActive(false);
        }
        public void EnableFactBtn()
        {
            factBtn.gameObject.SetActive(true);
        }
        public void DisableFactBtn()
        {
            factBtn.gameObject.SetActive(false);
        }
        public void EnableArrowBtn()
        {
            arrowBtn.gameObject.SetActive(true);
        }
        public void DisableArrowBtn()
        {
            arrowBtn.gameObject.SetActive(false);
        }
        public void EnableSubmitBtn()
        {
            subBtn.gameObject.SetActive(true);
        }
        public void DisableSubmitBtn()
        {
            subBtn.gameObject.SetActive(false);
        }
        public void EnableEndBtn()
        {
            endingBtn.gameObject.SetActive(true);
        }

        public void EndendBtn()
        {
            load.changeClickable();
        }

        public void EnableDisplayText()
        {
            displayScreenText.gameObject.SetActive(true);
        }


        public void OnTriggerEnter2D(Collider2D other)
        {
            if (other.gameObject.tag == "TriggerMarker")
            {
                submitButton.interactable = true;
                //Debug.Log("true");
                // Get component on collision to get the number.
                MoonTypeMarker number = other.GetComponent<MoonTypeMarker>();
                markerNumber = number.moonNumberMarker;
                
            }
            if (other.gameObject.name == "Fall")
            {
                seasons.text = "Fall";

            }
            else if (other.gameObject.name == "Winter")
            {
               
                seasons.text = "Winter";

            }
            else if (other.gameObject.name == "Spring")
            {
               
                seasons.text = "Spring";
            }
            else if (other.gameObject.name == "Summer")
            {
                
                seasons.text = "Summer";
            }

        }
        public void OnTriggerExit2D(Collider2D other)
        {
            if (other.gameObject.tag == "TriggerMarker")
            {
                submitButton.interactable = false;
                //Debug.Log("false");
            }
        }

        public void MatchMoon()
        {
            Debug.Log("Matching");
            if (markerNumber == moonNumber)
            {
                setWrongTextInactive();
                setCorrectTextActive();
                Debug.Log("correctanswer");
                correctAnswer = true;
                Invoke("setCorrectTextInactive", 3);
                audioSourceCorrect.Play();
            }
            else
            {
                setCorrectTextInactive();
                setWrongTextActive();
                Debug.Log("wronganswer");
                correctAnswer = false;
                Invoke("setWrongTextInactive", 3);
                audioSourceWrong.Play();
                count++;
                if (count == 3)
                {
                    EnableHint();
                }
                if(count == 6)
                {
                    EnableRetry();
                }
            }
        }

        void setCorrectTextActive()
        {
            answerCorrect.gameObject.SetActive(true);
        }


        void setCorrectTextInactive()
        {
            answerCorrect.gameObject.SetActive(false);
        }


        void setWrongTextActive()
        {
            answerWrong.gameObject.SetActive(true);
        }

        void setWrongTextInactive()
        {
            answerWrong.gameObject.SetActive(false);
        }
    }
}
