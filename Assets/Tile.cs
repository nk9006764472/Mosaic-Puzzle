using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tile : MonoBehaviour
{
    private Image _display;
    private Button _btn;

    private void Awake() 
    {
        _display = GetComponent<Image>();
        _btn = GetComponent<Button>();

        _btn.onClick.AddListener(() => TileClick());
    }

    private void TileClick()
    {
        
    }

    public void InitializeApplyColor(TileColor tileColor)
    {
        if(tileColor > 0)                                               //-->   because first element is empty
            _display.color = GameManager.level.PalleteColors[(int)tileColor];   
    }

    public void InitializeApplySprite(TileShape tileShape)
    {
        //_display.sprite = GameManager.level.PalleteShapes[(int)tileShape];
    }
}
