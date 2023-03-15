using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ButtonScroll : MonoBehaviour
{
    public List<GameObject> learningText;
    public Button continueBtn;

    public GameObject exitBtn, nextText;
    public int i = 1;

    public void SwitchButton()
    {
        if (i == 0)
        {
            i++;
            
        }
       else if (i < learningText.Count)
        {
            learningText[i -1].SetActive(false);
            learningText[i].SetActive(true);
            i++;
            if (i == learningText.Count)
            {
                EnableButton();
            }
        }
        else
        {
            
        }

        void EnableButton()
        {
            exitBtn.SetActive(true);
            nextText.SetActive(true);
        }



    }
}
