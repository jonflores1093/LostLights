using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


namespace InsertStudioLostLights
{
    public class Transitions : MonoBehaviour
    {
        //Button Transitions
        public void New_Game()
        {
            SceneManager.LoadScene("StoryScene");
        }

        public void Continue()
        {

        }

        public void Options()
        {

        }
    }
}