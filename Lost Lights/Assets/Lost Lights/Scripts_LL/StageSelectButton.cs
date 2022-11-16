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

        LoaderLL loadData;

        void Start()
        {
            loadData = FindObjectOfType<LoaderLL>();
            checkStages();
        }

        void checkStages()
        {
            if(loadData.lunarStage1 == true)
            {
                lunar1.interactable = true;
            }
            else if (loadData.lunarStage2 == true)
            {
                lunar2.interactable = true;
            }
            else if (loadData.lunarStage3 == true)
            {
                lunar3.interactable = true;
            }
            else if (loadData.solarStage1 == true)
            {
                solar1.interactable = true;
            }
            else if (loadData.solarStage2 == true)
            {
                solar2.interactable = true;
            }
            else if (loadData.solarStage3 == true)
            {
                solar3.interactable = true;
            }

        }

    }
}
