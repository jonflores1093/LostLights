using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


namespace InsertStudioLostLights 
{
    public class StageComplete : MonoBehaviour
    {
        Scene scene = SceneManager.GetActiveScene();
        public bool tutorial = true;
        public bool lunarStage1 = false;
        public bool lunarStage2 = false;
        public bool lunarStage3 = false;
        public bool solarStage1 = false;
        public bool solarStage2 = false;
        public bool solarStage3 = false;
        public void changeClickable()
        {
            if (scene.name == "Tutorial")
            {
                //SceneManager.LoadScene("Stage Select", LoadSceneMode.Single);

                Debug.Log("Set to true");
                //lunarStage1 = true;
            }
            else if(scene.name == "Lunar Landing Level 1")
            {

                    Debug.Log("Set to true1");
                
                //lunarStage2 = true;
            }
            else if (scene.name == "Lunar Landing Level 2")
            {

                Debug.Log("Set to true2");

                //lunarStage3 = true;
            }
            else if (scene.name == "Lunar Landing Level 3")
            {

                Debug.Log("Set to true3");

                //solarStage1 = true;
            }
            else if (scene.name == "Solar Salute 1")
            {

                Debug.Log("Set to true4");

                //solarStage2 = true;
            }
            else if (scene.name == "Solar Salute 2")
            {

                Debug.Log("Set to true5");

                //solarStage3 = true;
            }

        }





    }
}