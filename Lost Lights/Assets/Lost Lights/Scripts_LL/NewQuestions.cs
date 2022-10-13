using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewQuestions : MonoBehaviour
{
    public List<GameObject> moonTypes;
     
    public int randomQuestion;


    //static public List<Questions> moonList;

    private void Awake()
    {
        RandomQuestion();

    }

    //private void Start()
    //{
    //    moonList = new List<Questions>();
    //}


    public void RandomQuestion()
    {
        randomQuestion = (int)Random.Range(0, moonTypes.Count);

        Instantiate(moonTypes[randomQuestion], transform.position, transform.rotation);

        if (randomQuestion < moonTypes.Count - 1 )
        {
            // Never come back
            moonTypes.RemoveAt(randomQuestion);
        }
            
        
    }




}
