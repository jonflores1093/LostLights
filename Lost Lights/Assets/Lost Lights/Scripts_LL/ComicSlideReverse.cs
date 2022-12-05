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
    public class ComicSlideReverse : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        public GameObject scrollRight;



        public float rot_Speed = 20;
        bool rotate = false;



        void FixedUpdate()
        {
            if (rotate == false)
                return;
            scrollRight.transform.position += Vector3.right * rot_Speed * Time.deltaTime;



        }

        public void OnPointerDown(PointerEventData pointerEventData)
        {
            rotate = true;



        }

        public void OnPointerUp(PointerEventData pointerEventData)
        {
            rotate = false;


        }
    }
}