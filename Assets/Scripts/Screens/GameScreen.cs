using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameScreen : AScreen
{
    [SerializeField] private RectTransform _tileParent;
    [SerializeField] private GameObject _tile;

    [SerializeField] private int _rows = 8;
    [SerializeField] private int _coloumns = 8;
    [SerializeField] private Vector2 _offset = Vector2.zero;


    public void InitializeLevel(int levelNo)
    {   
        Vector2 leftBottom = new Vector2(_tileParent.localPosition.x - _tileParent.sizeDelta.x / 2f, _tileParent.localPosition.y - _tileParent.sizeDelta.y / 2f); 
        Vector2 tileHalf = new Vector2((_tileParent.rect.width / (_coloumns * 2)), _tileParent.rect.height / (_rows * 2));
        Vector2 startPos = leftBottom + tileHalf;

        Vector2 tileSize = new Vector2(_tileParent.rect.width / _coloumns, _tileParent.rect.height / _rows);

        for(int i = 0; i < _rows; i++)
        {
            for(int j = 0; j < _coloumns; j++)
            {
                GameObject spawnnedTile = Instantiate(_tile, _tileParent) as GameObject;
                RectTransform tileRT = spawnnedTile.GetComponent<RectTransform>();
                Tile tile = spawnnedTile.GetComponent<Tile>();
                Debug.Log(GameManager.level.CurrentLevel.ColorTable[i, j]);
                

                tileRT.anchoredPosition = startPos + new Vector2(tileHalf.x * 2 * i, tileHalf.y * 2 * j);
                tileRT.sizeDelta = tileSize - _offset;

            }
        }
    }
}
