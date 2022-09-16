using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace InsertStudioLostLights
{
    public class Counter : MonoBehaviour
    {
        public TMP_Text counter;
        public float num = 8;

        void Start()
        {
            counter = GetComponent<TMP_Text>();
            counter.text = "Starites remaining: " + num;
        }


        public void Btn_Count()
        {
            
            if(Gameplay.correctAnswer == true)
            {
                num--;
                counter.text = "Starites remaining: " + num;
                

            }
            
        }
    }


}