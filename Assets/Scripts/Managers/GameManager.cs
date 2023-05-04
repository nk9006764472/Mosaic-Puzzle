using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour, Managers
{
    public static GameManager Instance {get; private set;}
    public static LevelManager level {get; private set;}
    public static ScreenManager screen {get; private set;}

    private List<Managers> managers = new List<Managers>();

    private void Awake() 
    {
        if(Instance != this)    
            Instance = this;

        level = GetComponent<LevelManager>();
        screen = GetComponent<ScreenManager>();

        managers.Add(this);
        managers.Add(level);
        managers.Add(screen);

        for(int i = 0; i < managers.Count; i++)
            managers[i].Initialize();
    }

    public void Initialize()
    {
        
    }

}
