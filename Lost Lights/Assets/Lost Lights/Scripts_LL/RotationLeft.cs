using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


namespace InsertStudioLostLights
{
    public class RotationLeft : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {

        public GameObject rotatedObject, rotationlightButton;
        public RawImage bgMovement;
        public float xbg;
        public Timer clock;

        public AudioSource earthMove;


        public float rot_Speed = 50;
        bool rotate = false;

        void FixedUpdate()
        {
            if (rotate == false)
                return;
            rotatedObject.transform.Rotate(Vector3.forward * rot_Speed * Time.deltaTime);
            rotationlightButton.transform.Rotate(Vector3.down * rot_Speed * Time.deltaTime);
            bgMovement.uvRect = new Rect(bgMovement.uvRect.position + new Vector2(xbg,0) * Time.deltaTime, bgMovement.uvRect.size);
            clock.DecreaseTime();



        }


        public void OnPointerDown(PointerEventData pointerEventData)
        {
            rotate = true;
            earthMove.Play();

        }

        public void OnPointerUp(PointerEventData pointerEventData)
        {
            rotate = false;
            earthMove.Stop();
        }


    }

}
