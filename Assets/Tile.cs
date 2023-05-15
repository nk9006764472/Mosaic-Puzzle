using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tile : MonoBehaviour
{
    public Color[] Colors => _colors;
    public Sprite[] Sprites => _sprites;

    [SerializeField] Color[] _colors;
    [SerializeField] Sprite[] _sprites;
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
}
