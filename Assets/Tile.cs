using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tile : MonoBehaviour
{
    private Image _display;
    private Button _btn;

    private TileColor tileColor;
    private TileShape tileShape;

    private void Awake() 
    {
        _display = GetComponent<Image>();
        _btn = GetComponent<Button>();

        _btn.onClick.AddListener(() => TileClick());
    }

    private void TileClick()
    {
        if((int)tileColor - 1 == GameManager.level.SelectedColor && (int)tileShape - 1 == GameManager.level.SelectedShape)
        {
            _display.sprite = GameManager.level.FilledShapes[(int)tileShape - 1];
        }
        else    
        Debug.Log("Not Matched");

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
}
