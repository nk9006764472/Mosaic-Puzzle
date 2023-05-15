using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "L10X10_", menuName = "L10X10", order = 2)]
public class L10x10 : Level
{
    private void Awake() 
    {
        if(ColorTable == null) ColorTable = new TileColor[10, 10];
        if(ShapeTable == null) ShapeTable = new TileShape[10, 10];
    }
}