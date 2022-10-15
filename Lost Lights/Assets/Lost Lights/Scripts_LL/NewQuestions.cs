using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewQuestions : MonoBehaviour
{
    public List<GameObject> moonTypes;
     
    public int randomQuestion;

    private void Awake()
    {
        RandomQuestion();

    }


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
