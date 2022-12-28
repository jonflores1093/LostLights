using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using LoLSDK;
using SimpleJSON;

namespace InsertStudioLostLights
{
    public class ComicSlide : MonoBehaviour
    {

        public GameObject scrollLeft;

     
       

        public void ClickNext()
        {
       

            scrollLeft.transform.Translate(12.8f, 0.38f, 0);


        }

     
    }
}