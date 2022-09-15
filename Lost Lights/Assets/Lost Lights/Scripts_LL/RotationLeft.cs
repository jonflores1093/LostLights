using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


namespace InsertStudioLostLights
{
    public class RotationLeft : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {

        public GameObject rotatedObject, rotationlightButton;

        public float rot_Speed = 50;
        bool rotate = false;

        void FixedUpdate()
        {
            if (rotate == false)
                return;
            rotatedObject.transform.Rotate(Vector3.forward * rot_Speed * Time.deltaTime);
            rotationlightButton.transform.Rotate(Vector3.down * rot_Speed * Time.deltaTime);


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
