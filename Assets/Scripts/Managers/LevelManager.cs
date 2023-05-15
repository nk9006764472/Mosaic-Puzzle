using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour, Managers
{
    public Level CurrentLevel => _levels[currentLevelNo];
    [SerializeField] private Level[] _levels;

    private int currentLevelNo;

    public void Initialize()
    {
        
    }

    public void LoadLevel(int levelNo)
    {
        currentLevelNo = levelNo;
        GameScreen gameScreen = (GameScreen)GameManager.screen.Screens[EScreen.GAME];
        gameScreen.InitializeLevel(levelNo);
    }
}
