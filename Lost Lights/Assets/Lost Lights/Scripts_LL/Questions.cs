using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Questions : MonoBehaviour
{
    public GameObject[] moonTypes;

    private void Awake()
    {
        RandomQuestion();
    }
    private void Start()
    {
        
       
    }

    public void RandomQuestion()
    {
        int randomQuestion;
        randomQuestion = (int)Random.Range(0, moonTypes.Length);
        Instantiate(moonTypes[randomQuestion], transform.position, transform.rotation);
    }

    
}
