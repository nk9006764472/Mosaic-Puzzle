using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour, Managers
{

    public Level CurrentLevel => _levels[currentLevelNo];
    public GameScreen GameScreen => gameScreen;

    public TileColor SelectedColor { get { return selectedColor;} set { selectedColor = value; }}
    public TileShape SelectedShape { get { return selectedShape;} set { selectedShape = value; }}


    public Color[] PeiceColors => _colors;
    public Sprite[] OutlineShapes => _outlineShapes;
    public Sprite[] FilledShapes => _filledShapes;

    [SerializeField] Color[] _colors;
    [SerializeField] Sprite[] _outlineShapes;
    [SerializeField] Sprite[] _filledShapes;

    [SerializeField] private Level[] _levels;


    private int currentLevelNo;
    private GameScreen gameScreen;
    private TileColor selectedColor;
    private TileShape selectedShape;

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
