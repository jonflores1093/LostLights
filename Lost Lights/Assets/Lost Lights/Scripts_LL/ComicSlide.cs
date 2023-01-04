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
        //public GameObject scrollLeft;
        private Vector3 next1 = new Vector3(9.7f, 0, 0);
        private Vector2 next2 = new Vector2(23.9f, 0);
        private Vector2 next3 = new Vector2(39.2f, 0);
        private Vector2 next4 = new Vector2(56.5f, 0);
        private Vector2 next5 = new Vector2(75.3f, 0);
        private Vector2 next6 = new Vector2(92.1f, 0);
        private Vector2 next7 = new Vector2(92.1f, 0);
        private Vector2 next8 = new Vector2(105.6f, 0);
        private Vector2 next9 = new Vector2(121.1f, 0);
        private Vector2 next10 = new Vector2(138.9f, 0);




        public void ClickNext()
        {


            MainCamera.transform.position = new Vector3(9.7f, 0,0);

            
          


        }

     
    }
}