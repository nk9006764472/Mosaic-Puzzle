using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour, Managers
{
    [SerializeField] private AudioSource _click;
    [SerializeField] private AudioSource _choose;
    [SerializeField] private AudioSource _correct;
    [SerializeField] private AudioSource _wrong;
    [SerializeField] private AudioSource _completed;
    

    public void Initialize()
    {        
    }


    public void PlayButtonClick()
    {
        _click.Play();
    }

    public void PlayChoose()
    {
        _choose.Play();
    }

    public void PlayCorrectPlaced()
    {
        _correct.Play();
    }

    public void PlayWrongPlaced()
    {
        _wrong.Play();
    }

    public void PlayLevelCompleted()
    {
        _completed.Play();
    }
}
