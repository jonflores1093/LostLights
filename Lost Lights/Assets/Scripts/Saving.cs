using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;
public class Saving : MonoBehaviour
{
    [SerializeField, Header("Initial State Data")] GameLevelData gameLevelData;
    public class GameLevelData
    {
        public int saved_game_Level = 0;
    }
    public void SaveGame()
    {
        LOLSDK.Instance.SaveState(gameLevelData);
    }
    void OnLoad(GameLevelData loadingGameLevelData)
    {
        // Overrides serialized state data or continues with editor serialized values.
        if (loadingGameLevelData != null)
            gameLevelData = loadingGameLevelData;
        for (int i = 0; i < gameLevelData.saved_game_Level; ++i)
        {
            //CreatePan();
        }
        // Initially set the text displays since the lang node should be populated.
        //TextDisplayUpdate();

        // I use an init flag so I can call the same Set methods during initial load and during gameplay.
        // You don't have to follow this pattern, you can have init methods and gameplay methods separated.
        //_init = true;
    }


}
