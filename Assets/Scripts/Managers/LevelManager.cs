using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour, Managers
{

    public Level CurrentLevel => _levels[currentLevelNo];
    public int CurrentLevelNo => currentLevelNo;
    public GameScreen GameScreen => gameScreen;

    public TileColor SelectedColor { get { return selectedColor;} set { selectedColor = value; }}
    public TileShape SelectedShape { get { return selectedShape;} set { selectedShape = value; }}


    public Color[] PeiceColors => _colors;
    public Sprite[] OutlineShapes => _outlineShapes;
    public Sprite[] FilledShapes => _filledShapes;

    public List<Tile> TileOnBoard { get { return tilesOnBoard;} set { tilesOnBoard = value;}}

    [SerializeField] Color[] _colors;
    [SerializeField] Sprite[] _outlineShapes;
    [SerializeField] Sprite[] _filledShapes;

    [SerializeField] private Level[] _levels;


    private int currentLevelNo;
    private GameScreen gameScreen;
    private TileColor selectedColor;
    private TileShape selectedShape;

    private List<Tile> tilesOnBoard = new();

    public void Initialize()
    {
        
    }

    public void LoadLevel(int levelNo)
    {
        currentLevelNo = levelNo;
        gameScreen = (GameScreen)GameManager.screen.Screens[EScreen.GAME];
        gameScreen.InitializeLevel(levelNo);
    }


    public void LoadNextLevel()
    {
        if(currentLevelNo < _levels.Length)
        {
            LoadLevel(currentLevelNo + 1);
        }
    }


    public bool CheckGameOver()
    {
        for(int i = 0; i < tilesOnBoard.Count; i++)
        {
            if(!tilesOnBoard[i].IsFilled && tilesOnBoard[i].Color != TileColor.EMPTY && tilesOnBoard[i].Shape != TileShape.EMPTY)
            {
                return false;
            }
        }
        return true;
    }


    public void GameOver()
    {
        GameManager.screen.LoadPopUp(EScreen.GAMEOVER);
        GameManager.aud.PlayLevelCompleted();
        AbandonLevel();
    }

    public void AbandonLevel()
    {
        tilesOnBoard.Clear();
        tilesOnBoard.RemoveAll(s => s == null);
    }
}
