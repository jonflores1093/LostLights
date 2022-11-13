using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;
using SimpleJSON;

namespace InsertStudioLostLights
{
    public class NewQuestions : MonoBehaviour
    {
        public List<GameObject> moonTypes;
        public List<GameObject> Starrites;

        public int randomQuestion;
        public int randomStarrite;
        

        public Transform starritePosition;


        private void Awake()
        {
            RandomQuestion();

        }


        public void RandomQuestion()
        {
            randomQuestion = (int)Random.Range(0, moonTypes.Count);
            randomStarrite = (int)Random.Range(0, Starrites.Count);

            Instantiate(moonTypes[randomQuestion], transform.position, transform.rotation);
            Instantiate(Starrites[randomStarrite], starritePosition.position, starritePosition.rotation);

            if (randomQuestion < moonTypes.Count - 1)
            {
                // Never come back
                moonTypes.RemoveAt(randomQuestion);
                Starrites.RemoveAt(randomStarrite);
            }


        }




    }
}