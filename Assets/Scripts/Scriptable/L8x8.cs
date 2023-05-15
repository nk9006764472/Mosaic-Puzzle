using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "L8X8_", menuName = "L8X8", order = 1)]
public class L8x8 : Level
{
    private void Awake() 
    {
        if(ColorTable == null) ColorTable = new TileColor[8, 8];
        if(ShapeTable == null) ShapeTable = new TileShape[8, 8];
    }
}
