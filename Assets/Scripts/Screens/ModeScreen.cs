using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ModeScreen : AScreen
{
    [SerializeField] private Button _mode1;
    [SerializeField] private Button _mode2;
    [SerializeField] private Button _mode3;
    [SerializeField] private Button _mode4;
    [SerializeField] private Button _mode5;
    [SerializeField] private Button _mode6;
    [SerializeField] private Button _exit;
    [SerializeField] private Button _facebook;
    [SerializeField] private Button _rateUs;
    [SerializeField] private Button _sound;

    private void Awake() 
    {
        _mode1.onClick.AddListener(() => LoadGameScreen());
        _mode2.onClick.AddListener(() => LoadGameScreen());
        _mode3.onClick.AddListener(() => LoadGameScreen());
        _mode4.onClick.AddListener(() => LoadGameScreen());
        _mode5.onClick.AddListener(() => LoadGameScreen());
        _mode6.onClick.AddListener(() => LoadGameScreen());
        _exit.onClick.AddListener(() => LoadExitScreen());
        _facebook.onClick.AddListener(() => GoToFaceBook());
        _rateUs.onClick.AddListener(() => RateUs());
        _sound.onClick.AddListener(() => ToggleSound());

    }
    public override void InitializeScreen()
    {

    }

    private void LoadGameScreen()
    {
        GameManager.screen.LoadScreen(EScreen.LEVELS);
        GameManager.aud.PlayButtonClick();
    }

    private void LoadExitScreen()
    {
        Application.Quit();
    }

    private void GoToFaceBook()
    {

    }

    private void RateUs()
    {

    }

    private void ToggleSound()
    {

    }

}
