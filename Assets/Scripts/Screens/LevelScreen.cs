using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelScreen : AScreen
{
    [SerializeField] private Button _close;
    [SerializeField] private List<Button> _levelButtons;

    public override void InitializeScreen()
    {
    }

    private void Awake() 
    {
        _close.onClick.AddListener(() => ModeScreen());

        for(int i = 0; i < _levelButtons.Count; i++)
        {
            int levelNo = i;
            _levelButtons[i].onClick.AddListener(() => LoadLevel(levelNo));
        }
    }

    private void LoadLevel(int levelNo)
    {
        GameManager.screen.LoadScreen(EScreen.GAME);
        GameManager.level.LoadLevel(levelNo);
        GameManager.aud.PlayButtonClick();
    }

    private void ModeScreen()
    {
        GameManager.screen.LoadScreen(EScreen.MODES);
        GameManager.aud.PlayButtonClick();
    }
}
