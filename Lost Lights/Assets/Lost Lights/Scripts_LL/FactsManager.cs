using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FactsManager : MonoBehaviour
{
    public List<GameObject> facts;

    public int randomFact;

    private void Awake()
    {
        RandomFact();

    }
    public void RandomFact()
    {
        randomFact = (int)Random.Range(0, facts.Count);
        
        Instantiate(facts[randomFact], transform);
    }

}
