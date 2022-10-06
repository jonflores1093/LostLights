using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace InsertStudioLostLights
{


    public class MechanicScreen : MonoBehaviour
    {
        public TMP_Text mechanic;
        public Button disableBtn;

        void Start()
        {
            mechanic.text = "The Starites are trapped on Earth and must return to the moon!\n Match the Starite's desired eclipse by clicking the arrows to rotate the Earth.\n Once the desired eclipse is made, click the submit button!\n Help send 8 starites back home!\n Click this screen to continue!";

        }
        public void StartGame() 
        {

            DisableButton();
            DestroyBtn();


        }
        void DisableButton()
        {
            disableBtn.interactable = false;

        }

        void DestroyBtn() 
        {
            Destroy(gameObject);

        }
    }
}
