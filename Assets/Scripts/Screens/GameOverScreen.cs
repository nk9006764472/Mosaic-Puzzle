using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverScreen : AScreen
{
    [SerializeField] private Button _next;

    private void Awake() 
    {
        _next.onClick.AddListener(() => NextClicked());
    }

    public override void InitializeScreen()
    {
        
    }

    private void NextClicked()
    {
        GameManager.screen.LoadScreen(EScreen.GAME);
        GameManager.level.LoadNextLevel();
    }
}
