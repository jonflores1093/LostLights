using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Questions : MonoBehaviour
{
    public GameObject[] moonTypes;
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
        randomQuestion = (int)Random.Range(0, moonTypes.Length);      
        Instantiate(moonTypes[randomQuestion], transform.position, transform.rotation);
    }

    


    
}
