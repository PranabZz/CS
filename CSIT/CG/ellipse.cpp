#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;

void midptellipse(int x1, int y1,int x2, int y2)
{
    float dx, dy, d1, d2, x, y;
    x = 0;
    y = y1;

    // Initial decision parameter of region 1
    d1 = (y1 * y1) - (x1 * x1 * y1) +
                     (0.25 * x1 * x1);
    dx = 2 * y1 * y1 * x;
    dy = 2 * x1 * x1 * y;

    // For region 1
    while (dx < dy)
    {

        // Print points based on 4-way
        cout << x + x2 << " , " << y + y2 << endl;
        cout << -x + x2 << " , " << y + y2 << endl;
        cout << x + x2 << " , " << -y + y2 << endl;
        cout << -x + x2 << " , " << -y + y2 << endl;

        // Checking and updating value of
        // decision parameter based on algorithm
        if (d1 < 0)
        {
            x++;
            dx = dx + (2 * y1 * y1);
            d1 = d1 + dx + (y1 * y1);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * y1 * y1);
            dy = dy - (2 * x1 * x1);
            d1 = d1 + dx - dy + (y1 * y1);
        }
    }

    // Decision parameter of region 2
    d2 = ((y1 * y1) * ((x + 0.5) * (x + 0.5))) +
         ((x1 * x1) * ((y - 1) * (y - 1))) -
          (x1 * x1 * y1 * y1);

    // Plotting points of region 2
    while (y >= 0)
    {

        // Print points based on 4-way 
        cout << x + x2 << " , " << y + y2 << endl;
        cout << -x + x2 << " , " << y + y2 << endl;
        cout << x + x2 << " , " << -y + y2 << endl;
        cout << -x + x2 << " , " << -y + y2 << endl;

        // Checking and updating parameter
        // value based on algorithm
        if (d2 > 0)
        {
            y--;
            dy = dy - (2 * x1 * x1);
            d2 = d2 + (x1 * x1) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * y1 * y1);
            dy = dy - (2 * x1 * x1);
            d2 = d2 + dx - dy + (x1 * x1);
        }
    }
}

// Driver code
int main()
{
    // To draw a ellipse of major and
    // minor radius 15, 10 centered at (50, 50)
    midptellipse(10, 15, 50, 50);

    return 0;
}
