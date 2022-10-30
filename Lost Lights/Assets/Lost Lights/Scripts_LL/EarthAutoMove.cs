using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarthAutoMove : MonoBehaviour
{
    public GameObject rotatedObject;

    public int rot_Speed;
   

    
    void FixedUpdate()
    {
        rotatedObject.transform.Rotate(Vector3.back * rot_Speed * Time.deltaTime);
    }
}
