using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;
using UnityEngine.UI;

public class HelperLL : MonoBehaviour
{

    /// <typeparam name="T"></typeparam>
    /// <param name="newGameButton"></param>
    /// <param name="continueButton"></param>
    /// <param name="callback"></param>
    /// 
    public static void StateButtonInitialize<T>(Button New_Game, Button Continue, System.Action<T> callback)
             where T : class
    {
        // Invoke callback with null to use the default serialized values of the state data from the editor.
        New_Game.onClick.AddListener(() =>
        {
            New_Game.gameObject.SetActive(false);
            Continue.gameObject.SetActive(false);
            callback(null);
        });

        // Hide while checking for data.
        New_Game.gameObject.SetActive(false);
        Continue.gameObject.SetActive(false);
        // Check for valid state data, from server or fallback local ( PlayerPrefs )
        LOLSDK.Instance.LoadState<T>(state =>
        {
            if (state != null)
            {
                // Hook up and show continue only if valid data exists.
                Continue.onClick.AddListener(() =>
                {
                    New_Game.gameObject.SetActive(false);
                    Continue.gameObject.SetActive(false);
                    callback(state.data);
                    // Broadcast saved progress back to the teacher app.
                    LOLSDK.Instance.SubmitProgress(state.score, state.currentProgress, state.maximumProgress);//change
                });

                Continue.gameObject.SetActive(true);
            }

            New_Game.gameObject.SetActive(true);
        });


    }
}
