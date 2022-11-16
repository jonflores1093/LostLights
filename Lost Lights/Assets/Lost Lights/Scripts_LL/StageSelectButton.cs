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

        Stages stage;

        void Start()
        {
            checkStages();
        }

        void checkStages()
        {
            if(stage.lunarStage1 == true)
            {
                lunar1.interactable = true;
            }
            else if (stage.lunarStage2 == true)
            {
                lunar2.interactable = true;
            }
            else if (stage.lunarStage3 == true)
            {
                lunar3.interactable = true;
            }
            else if (stage.solarStage1 == true)
            {
                solar1.interactable = true;
            }
            else if (stage.solarStage2 == true)
            {
                solar2.interactable = true;
            }
            else if (stage.solarStage3 == true)
            {
                solar3.interactable = true;
            }

        }

    }
}
