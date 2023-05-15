using UnityEngine;
using Sirenix.OdinInspector;

public abstract class Level : SerializedScriptableObject
{
    [TableMatrix(HorizontalTitle = "Tile Color")] public TileColor[,] ColorTable;
    [TableMatrix(HorizontalTitle = "Tile Shape")] public TileShape[,] ShapeTable;

    public enum TileColor
    {
        EMPTY, O, R, G, Y, PU, BL, BR, PI, BK, W
    }

    public enum TileShape
    {
        EMPTY, S, C, T1, T2, T3, T4, C1, C2, C3, C4
    }
}
