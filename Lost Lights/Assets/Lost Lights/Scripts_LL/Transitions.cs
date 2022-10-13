using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;



namespace InsertStudioLostLights
{
    public class Transitions : MonoBehaviour
    {
        public TMP_Text tempText;
        //Button Transitions
        public void New_Game()
        {
            SceneManager.LoadScene("Level 1");
        }

        public void Continue()
        {
            tempText.text = "Coming Soon!";
        }

        public void Options()
        {
            tempText.text = "Coming Soon!";
        }
    }
}