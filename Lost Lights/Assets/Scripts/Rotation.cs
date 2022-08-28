using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    public float speed = 1.5f;
    private Vector3 target;
    private Vector3 target_rot;
    private bool planetClick;
    void Start()
    {
        target = transform.position;
    }

    void OnMouseDown()
    {
        planetClick = true;
    }
    void Update()
    {

        if (Input.GetMouseButtonDown(0)) 
        {
            if (planetClick) 
            {
                target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                target.z = transform.position.z;
                target_rot = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            }

        }
     
        var angle = Mathf.Atan2(target_rot.y - transform.position.y, target_rot.x - transform.position.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.Euler(0, 0, angle + 15);
    }


}
