using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace InsertStudioLostLights
{

    public class SubmitMarker : MonoBehaviour
    {

        public Button submitButton;
        public TMP_Text counter, correct, tryagain;
        public float num = 8;
      
        public int markerNumber;
        public bool correctAnswer;
        public GameObject moon;
        public int moonNumber;

        NewQuestions changeQuestion;

        [SerializeField] AudioClip audioCorrect;
        [SerializeField] AudioClip audioWrong;
        AudioSource audioSourceCorrect;
        AudioSource audioSourceWrong;

        //Canvas Mechanics
        public MechanicScreen endScreen;

        public GameObject answerText;


        private void Awake()
        {
            // AUDIO
            audioSourceCorrect = gameObject.AddComponent<AudioSource>();
            if (audioCorrect != null)
                audioSourceCorrect.clip = audioCorrect;
            audioSourceCorrect.playOnAwake = false;

            audioSourceWrong = gameObject.AddComponent<AudioSource>();
            if (audioWrong != null)
                audioSourceWrong.clip = audioWrong;
            audioSourceWrong.playOnAwake = false;

        }
        void Start()
        {
            Button btn = submitButton.GetComponent<Button>();
            btn.onClick.AddListener(TaskOnClick);

            counter.text = "Starites remaining: " + num;

            if (moon == null)
            {
                moon = GameObject.FindWithTag("Moon");
                moonNumber = moon.GetComponent<MoonType>().moonNumber;
            }
            
            changeQuestion = FindObjectOfType<NewQuestions>();


            
        }

         
        void TaskOnClick()
        {
            MatchMoon();

            if (correctAnswer == true)
            {
                num--;
                counter.text = "Starites remaining: " + num;
                Object.Destroy(moon);
                changeQuestion.RandomQuestion();
                Invoke("UpdateMoon", .05f);
                DisableButton();
                Invoke("EnableButton", 1.5f);


                // Add animation or good job box

            }
            if (num == 0) 
            {
                endScreen.gameObject.SetActive(true);
                Debug.Log("Game Over!");
            }
           
        }

        void UpdateMoon()
        {
            moon = GameObject.FindWithTag("Moon");
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
                setTextActive();
                Debug.Log("correctanswer");
                correctAnswer = true;
                correct.text = "Correct!";
                Invoke("setTextInactive", 3);
                audioSourceCorrect.Play();
            }
            else
            {
                setTextActive();
                Debug.Log("wronganswer");
                correctAnswer = false;
                tryagain.text = "Try Again!";
                Invoke("setTextInactive", 3);
                audioSourceWrong.Play();

            }
        }

        void setTextActive()
        {
            answerText.gameObject.SetActive(true);
        }


        void setTextInactive()
        {
            answerText.gameObject.SetActive(false);
        }
    }

}

