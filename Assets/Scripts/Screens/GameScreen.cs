using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameScreen : AScreen
{
    [SerializeField] private RectTransform _tileParent;
    [SerializeField] private GameObject _tile;

    [SerializeField] private int _rows = 8;
    [SerializeField] private int _coloumns = 8;
    [SerializeField] private Vector2 _tileOffset = Vector2.zero;
    [SerializeField] private ColorPalleteItem[] _colorPalleteItems;
    [SerializeField] private ShapePalleteItem[] _shapePalleteItems;

    private void Awake() 
    {
        for(int i = 0; i < _colorPalleteItems.Length; i++)    
        {
            int index = i;
            _colorPalleteItems[index]._colorButton.onClick.AddListener(() => ColorPalleteItemClicked(index));
        }

        for(int i = 0; i < _shapePalleteItems.Length; i++)
        {
            int index = i;
            _shapePalleteItems[index]._shapeButton.onClick.AddListener(() => ShapePalleteItemClicked(index));
        }
    }

    public override void InitializeScreen()
    {
        GameManager.level.SelectedColor = 0;
        GameManager.level.SelectedShape = 0;
        ActivateSelectionBorder();
        ChangeShapeItemsColor();
    }

    public void InitializeLevel(int levelNo)
    {   
        Vector2 leftTop = new Vector2(_tileParent.localPosition.x - _tileParent.sizeDelta.x / 2f, _tileParent.localPosition.y + _tileParent.sizeDelta.y / 2f); 
        Vector2 tileHalf = new Vector2((_tileParent.rect.width / (_coloumns * 2)), _tileParent.rect.height / (_rows * 2));
        Vector2 startPos = new Vector2(leftTop.x + tileHalf.x, leftTop.y - tileHalf.y);

        Vector2 tileSize = new Vector2(_tileParent.rect.width / _coloumns, _tileParent.rect.height / _rows);

        for(int i = 0; i < _coloumns; i++)
        {
            for(int j = 0; j < _rows; j++)
            {
                GameObject spawnnedTile = Instantiate(_tile, _tileParent) as GameObject;
                RectTransform tileRT = spawnnedTile.GetComponent<RectTransform>();
                Tile tile = spawnnedTile.GetComponentInChildren<Tile>();
                
                tile.InitializeApplyColor(GameManager.level.CurrentLevel.ColorTable[i, j]);
                tile.InitializeApplySprite(GameManager.level.CurrentLevel.ShapeTable[i, j]);
                
                tileRT.anchoredPosition = new Vector2(startPos.x + tileHalf.x * 2 * i, startPos.y - tileHalf.y * 2 * j);
                tileRT.sizeDelta = tileSize - _tileOffset;

            }
        }
    }

    private void ActivateSelectionBorder()
    {
        for(int i = 0; i < _colorPalleteItems.Length; i++)
        {
            _colorPalleteItems[i]._selectionBorder.enabled = i == GameManager.level.SelectedColor;
            _shapePalleteItems[i]._selectionBorder.enabled = i == GameManager.level.SelectedShape;
        }
    }

    private void ColorPalleteItemClicked(int index)
    {
       GameManager.level.SelectedColor = index;
       ActivateSelectionBorder();
       ChangeShapeItemsColor();
    }

    private void ShapePalleteItemClicked(int index)
    {
        GameManager.level.SelectedShape = index;
        ActivateSelectionBorder();
    }

    private void ChangeShapeItemsColor()
    {
        for(int i = 0; i < _shapePalleteItems.Length; i++)
        {
            _shapePalleteItems[i]._shapeButton.image.color = GameManager.level.PeiceColors[GameManager.level.SelectedColor];
        }
    }


    [System.Serializable]
    public class ColorPalleteItem
    {
        public Image _selectionBorder;
        public Button _colorButton;
    }

    [System.Serializable]
    public class ShapePalleteItem
    {
        public Image _selectionBorder;
        public Button _shapeButton;
    }
}

