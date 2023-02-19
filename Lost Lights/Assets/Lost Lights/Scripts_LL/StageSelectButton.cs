using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

namespace InsertStudioLostLights
{
    public class StageSelectButton : MonoBehaviour
    {
        public Button lunar1, lunar2, lunar3, solar1, solar2, solar3;

        LoaderLL loader;
        DefaultStages stages;

        private void Awake()
        {
            loader = FindObjectOfType<LoaderLL>();
            stages = loader.defaultStages; 
        }

        void Start()
        {
            
            checkStages();
            
        }
        
        void checkStages()
        {
            if(stages.lunarStage1 == true)
            {
                lunar1.interactable = true;
            }
            if (stages.lunarStage2 == true)
            {
                lunar2.interactable = true;
            }
            if (stages.lunarStage3 == true)
            {
                lunar3.interactable = true;
            }
            if (stages.solarStage1 == true)
            {
                solar1.interactable = true;
            }
            if (stages.solarStage2 == true)
            {
                solar2.interactable = true;
            }
            if (stages.solarStage3 == true)
            {
                solar3.interactable = true;
            }

        }

    }
}
