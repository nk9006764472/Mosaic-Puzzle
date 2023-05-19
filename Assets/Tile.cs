using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class Tile : MonoBehaviour
{
    public int TileRow { get { return tileRow;} set { tileRow = value;}}
    public int TileColoumn { get { return tileColoumn; } set { tileColoumn = value; }}

    [SerializeField] private Image _bg;
    private Image _display;
    private Button _btn;

    private TileColor tileColor;
    private TileShape tileShape;
    private int tileRow = 0;
    private int tileColoumn = 0;

    private bool isFilled = false;

    private void Awake() 
    {
        _display = GetComponent<Image>();
        _btn = GetComponent<Button>();

        _btn.onClick.AddListener(() => TileClick());
    }


    private void TileClick()
    {
        if(tileColor == GameManager.level.SelectedColor && tileShape == GameManager.level.SelectedShape)
        {
            if(!isFilled)
                _display.sprite = GameManager.level.FilledShapes[(int)tileShape - 1];
            else
            _display.sprite = GameManager.level.OutlineShapes[(int)tileShape - 1];

            isFilled = !isFilled;
        }
        else    
            {
                GameManager.level.GameScreen.SpawnFallingTile(tileRow, tileColoumn);
            }
    }

    public void EnableBG()
    {
        _bg.enabled = true;
    }

    public void InitializeApplyColor(TileColor color)
    {
        tileColor = color;

        if(color > 0)                                               //-->   because first element is empty
            _display.color = GameManager.level.PeiceColors[(int)color - 1];   
    }


    public void InitializeApplySprite(TileShape shape)
    {
        tileShape = shape;

        if(shape > 0)
        _display.sprite = GameManager.level.OutlineShapes[(int)shape - 1];
    }


    public void ApplyFilledSprites(TileShape shape)
    {
        if(shape > 0)
        _display.sprite = GameManager.level.FilledShapes[(int)shape - 1];
    }

}
