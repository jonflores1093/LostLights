using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using LoLSDK;
using SimpleJSON;


namespace InsertStudioLostLights
{
    public class RotationLeft : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {

        public GameObject rotatedObjectMain, rotationlightButton, rotatedObjectMini, orbit;
        public RawImage bgMovement;
        public float xbg;
        //public Timer clock;

        public AudioSource earthMove;


        public float rot_Speed = 50;
        bool rotate = false;
        
        void FixedUpdate()
        {
            if (rotate == false)
                return;
            rotatedObjectMain.transform.Rotate(Vector3.forward * rot_Speed * Time.deltaTime);
            rotatedObjectMini.transform.Rotate(Vector3.forward * rot_Speed * Time.deltaTime);
            orbit.transform.Rotate(Vector3.forward * rot_Speed * Time.deltaTime);
            rotationlightButton.transform.Rotate(Vector3.down * rot_Speed * Time.deltaTime);
            bgMovement.uvRect = new Rect(bgMovement.uvRect.position + new Vector2(xbg,0) * Time.deltaTime, bgMovement.uvRect.size);

            //if (clock.isClock)
            //{
            //    clock.time += Time.deltaTime * clock.ClockSpeedMultiplier;
            //    clock.DisplayTimeBackwards();
            //}


        }


        public void OnPointerDown(PointerEventData pointerEventData)
        {
            rotate = true;
            earthMove.Play();
            //clock.DecreaseTime();
        }

        public void OnPointerUp(PointerEventData pointerEventData)
        {
            rotate = false;
            earthMove.Stop();
            //clock.PauseTime();

        }


    }

}
