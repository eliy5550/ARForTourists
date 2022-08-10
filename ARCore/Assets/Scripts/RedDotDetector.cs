
using System.Drawing;
using UnityEngine;

public class RedDotDetector
{

    public static bool FindRedCircle(out Vector2 redPoint) {
        var bitMap = GetMap();

        if (Find(bitMap, out redPoint))
        {
            Debug.Log(redPoint + " -- FOUND RED POINT!");
            return true;
        }
        else
        {
            Debug.Log("red point NOT found...");
            return false;
        }
    }

    private static bool Find(Bitmap bitMap, out Vector2 redPoint)
    {
        for (int i = 0; i < 300; i+=5) {
            for (int j = 0; j < 300; j+=5)
            {
                var pixel = bitMap.GetPixel(i, j);
                if (pixel.R > pixel.G + 100 && pixel.R > pixel.B + 100 && pixel.R > 150) {
                    redPoint.x = j;
                    redPoint.y = i;
                    return true;
                }
            }
        }
        redPoint.x = 0;
        redPoint.y = 0;
        return false;
    }

    private static Bitmap GetMap()
    {
        int bitmapSize = 300;
        var bitmap = new Bitmap(bitmapSize, bitmapSize);
        var graphics = System.Drawing.Graphics.FromImage(bitmap);
        graphics.CopyFromScreen(new Point(Screen.width/2 -150, Screen.height / 2 -150), new Point(0, 0), new Size(bitmapSize, bitmapSize));
        //print(bitmap.GetPixel(0,0));
        //print(bitmap.GetPixel(299,299));
        return bitmap;
    }
}
