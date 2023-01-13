using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using LoLSDK;
using SimpleJSON;
using System.IO;
using UnityEngine.UI;


namespace InsertStudioLostLights
{ 
public class InitializeLoad : MonoBehaviour

    
{

        LoaderLL loader;
        [SerializeField] Button New_Game, Continue;
        private void Awake()
        {
            //DefaultStages DefaultStages = new DefaultStages();
            //DefaultStages = loader.defaultStages;
        }

        void Start()
        {
        HelperLL.StateButtonInitialize<DefaultStages>(New_Game, Continue, OnLoad);
        }

        void OnLoad(DefaultStages stagesSave)
        {
            if (stagesSave != null)
                loader.defaultStages = stagesSave;

            
            Debug.Log("Loaded");
        }


    }

}
