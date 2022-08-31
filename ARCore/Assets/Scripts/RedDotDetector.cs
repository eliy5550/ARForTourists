
using System;
using System.Drawing;
using UnityEngine;

public class RedDotDetector
{

    public static bool FindRedCircle(Camera camera , ref Vector2 redPoint) {
        Texture2D tex = new Texture2D(camera.pixelWidth, camera.pixelHeight, TextureFormat.RGB24, false);
        RenderTexture rt = new RenderTexture(camera.pixelWidth, camera.pixelHeight, 24);
        camera.targetTexture = rt;
        camera.Render();
        RenderTexture.active = rt;

        Debug.Log(tex.GetPixel(0, 0));

        camera.targetTexture = null;
        RenderTexture.active = null; // added to avoid errors 
        return false;
    }

    //public static bool FindRedCircle(out Vector2 redPoint) {

    //    var bitMap = GetMap();

    //    if (Find(bitMap, out redPoint))
    //    {
    //        //Debug.Log(redPoint + " -- FOUND RED POINT!");
    //        return true;
    //    }
    //    else
    //    {
    //        //Debug.Log("red point NOT found...");
    //        return false;
    //    }
    //}

    //private static bool Find(Bitmap bitMap, out Vector2 redPoint)
    //{
    //    for (int i = 0; i < 300; i += 5)
    //    {
    //        for (int j = 0; j < 300; j += 5)
    //        {
    //            var pixel = bitMap.GetPixel(i, j);
    //            if (pixel.R > pixel.G + 100 && pixel.R > pixel.B + 100 && pixel.R > 100)
    //            {
    //                redPoint.x = j;
    //                redPoint.y = i;
    //                return true;
    //            }
    //        }
    //    }
    //    redPoint.x = 0;
    //    redPoint.y = 0;
    //    return false;
    //}

    //private static Bitmap GetMap()
    //{
    //    int bitmapSize = 300;
    //    var bitmap = new Bitmap(bitmapSize, bitmapSize);
    //    var graphics = System.Drawing.Graphics.FromImage(bitmap);
    //    graphics.CopyFromScreen(new Point(Screen.width / 2 - 150, Screen.height / 2 - 150), new Point(0, 0), new Size(bitmapSize, bitmapSize));
    //    //print(bitmap.GetPixel(0,0));
    //    //print(bitmap.GetPixel(299,299));
    //    return bitmap;
    //}
}
