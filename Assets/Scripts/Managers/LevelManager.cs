using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour, Managers
{
    public Color[] PalleteColors => _colors;
    public Sprite[] PalleteShapes => _sprites;

    [SerializeField] Color[] _colors;
    [SerializeField] Sprite[] _sprites;


    public Level CurrentLevel => _levels[currentLevelNo];
    public GameScreen GameScreen => gameScreen;


    [SerializeField] private Level[] _levels;

    private int currentLevelNo;
    private GameScreen gameScreen;

    public void Initialize()
    {
        
    }

    public void LoadLevel(int levelNo)
    {
        currentLevelNo = levelNo;
        gameScreen = (GameScreen)GameManager.screen.Screens[EScreen.GAME];
        gameScreen.InitializeLevel(levelNo);
    }
}
