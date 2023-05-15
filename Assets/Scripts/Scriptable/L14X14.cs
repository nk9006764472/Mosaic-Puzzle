using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "L14X14_", menuName = "L14X14", order = 3)]
public class L14X14 : Level
{
    private void Awake() 
    {
        if(ColorTable == null) ColorTable = new TileColor[14, 14];
        if(ShapeTable == null) ShapeTable = new TileShape[14, 14];
    }
}
