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
        public Camera MainCamera;
        
     

        
        public void ClickNext()
        {

            MainCamera.transform.Translate(15f,0,0);

            

        }

     
    }
}