using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class GameScreen : AScreen
{
    [SerializeField] private RectTransform _tileParent;
    [SerializeField] private GameObject _tile;

    [SerializeField] private int _rows = 8;
    [SerializeField] private int _coloumns = 8;
    [SerializeField] private Vector2 _tileOffset = Vector2.zero;
    [SerializeField] private ColorPalleteItem[] _colorPalleteItems;
    [SerializeField] private ShapePalleteItem[] _shapePalleteItems;

    private Vector2 leftTop, tileHalf, startPos, tileSize;
    private float fallingAnimationDuration;

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
        GameManager.level.SelectedColor = TileColor.O;
        GameManager.level.SelectedShape = TileShape.S;
        ActivateSelectionBorder();
        ChangeShapeItemsColor();
    }


    /// <summary>
    /// Responsible for spawwing and setting its position when level is generated.
    /// </summary>
    /// <param name="levelNo"></param>
    public void InitializeLevel(int levelNo)
    {   
        leftTop = new Vector2(_tileParent.localPosition.x - _tileParent.sizeDelta.x / 2f, _tileParent.localPosition.y + _tileParent.sizeDelta.y / 2f); 
        tileHalf = new Vector2((_tileParent.rect.width / (_coloumns * 2)), _tileParent.rect.height / (_rows * 2));
        startPos = new Vector2(leftTop.x + tileHalf.x, leftTop.y - tileHalf.y);

        tileSize = new Vector2(_tileParent.rect.width / _coloumns, _tileParent.rect.height / _rows);

        for(int i = 0; i < _coloumns; i++)
        {
            for(int j = 0; j < _rows; j++)
            {
                GameObject fallingTile = Instantiate(_tile, _tileParent) as GameObject;
                RectTransform tileRT = fallingTile.GetComponent<RectTransform>();
                Tile tile = fallingTile.GetComponentInChildren<Tile>();

                tile.TileColoumn = i;
                tile.TileRow = j;

                tile.EnableBG();
                tile.InitializeApplyColor(GameManager.level.CurrentLevel.ColorTable[i, j]);
                tile.InitializeApplySprite(GameManager.level.CurrentLevel.ShapeTable[i, j]);

                tileRT.anchoredPosition = new Vector2(startPos.x + tileHalf.x * 2 * i, startPos.y - tileHalf.y * 2 * j);
                tileRT.sizeDelta = tileSize - _tileOffset;
            }
        }
    }


    /// <summary>
    /// Color and Shape (on both sides of screen) selection outline.
    /// </summary>
    private void ActivateSelectionBorder()
    {
        for(int i = 0; i < _colorPalleteItems.Length; i++)
        {
            _colorPalleteItems[i]._selectionBorder.enabled = i == (int)GameManager.level.SelectedColor - 1;
            _shapePalleteItems[i]._selectionBorder.enabled = i == (int)GameManager.level.SelectedShape - 1;
        }
    }


    private void ColorPalleteItemClicked(int index)
    {
       GameManager.level.SelectedColor = (TileColor)index + 1;
       ActivateSelectionBorder();
       ChangeShapeItemsColor();
    }


    private void ShapePalleteItemClicked(int index)
    {
        GameManager.level.SelectedShape = (TileShape)index + 1;
        ActivateSelectionBorder();
    }


    private void ChangeShapeItemsColor()
    {
        for(int i = 0; i < _shapePalleteItems.Length; i++)
        {
            _shapePalleteItems[i]._shapeButton.image.color = GameManager.level.PeiceColors[(int)GameManager.level.SelectedColor - 1]; //selected color can never be 0 as 0 is empty
        }
    }


    public void SpawnFallingTile(int row, int coloumn)
    {
        GameObject fallingTile = Instantiate(_tile, _tileParent) as GameObject;
        RectTransform tileRT = fallingTile.GetComponent<RectTransform>();
        Tile tile = fallingTile.GetComponentInChildren<Tile>();

        tile.TileColoumn = coloumn;
        tile.TileRow = row;

        tile.InitializeApplyColor(GameManager.level.SelectedColor);
        tile.ApplyFilledSprites(GameManager.level.SelectedShape);

        tileRT.anchoredPosition = new Vector2(startPos.x + tileHalf.x * 2 * coloumn, startPos.y - tileHalf.y * 2 * row);
        tileRT.sizeDelta = tileSize - _tileOffset;

        fallingAnimationDuration = Random.Range(1f,1.5f);
        tileRT.DOAnchorPosY(tileRT.anchoredPosition.y - 1000f, fallingAnimationDuration).SetEase(Ease.InBack);
        tileRT.DOAnchorPosX(tileRT.anchoredPosition.x + Random.Range(-500f, 500f), fallingAnimationDuration).SetEase(Ease.InOutQuad);
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

