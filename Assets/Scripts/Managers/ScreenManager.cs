using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenManager : MonoBehaviour, Managers
{
    [SerializeField] private AScreen[] screenReference;

    public Dictionary<EScreen, AScreen> Screens = new();

    public void LoadScreen(EScreen screen)
    {
        for(int i = 0; i < screenReference.Length; i++)
            screenReference[i].gameObject.SetActive(false);
        
        Screens[screen].gameObject.SetActive(true);
        Screens[screen].InitializeScreen();
    }

    public void LoadPopUp(EScreen screen)
    {
        Screens[screen].gameObject.SetActive(true);
        Screens[screen].InitializeScreen();
    }

    public void Initialize()
    {
        Screens.Add(EScreen.MODES, screenReference[0]);
        Screens.Add(EScreen.LEVELS, screenReference[1]);
        Screens.Add(EScreen.GAME, screenReference[2]);
        Screens.Add(EScreen.GAMEOVER, screenReference[3]);

        LoadScreen(EScreen.MODES);
    }
}

public enum EScreen
{
    MODES, 
    LEVELS,
    GAMEOVER,
    GAME
}


