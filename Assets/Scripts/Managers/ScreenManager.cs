using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenManager : MonoBehaviour, Managers
{
    [SerializeField] private AScreen[] screenReference;

    private Dictionary<EScreen, AScreen> Screens = new();

    public void LoadScreen(EScreen screen)
    {
        Debug.Log(Screens[screen].gameObject.name);
    }

    public void Initialize()
    {
        Screens.Add(EScreen.MODES, screenReference[0]);
        Screens.Add(EScreen.LEVELS, screenReference[1]);
        Screens.Add(EScreen.GAME, screenReference[2]);
        Screens.Add(EScreen.STORE, screenReference[3]);

        LoadScreen(EScreen.MODES);
    }
}

public enum EScreen
{
    MODES, 
    LEVELS,
    STORE,
    GAME
}


