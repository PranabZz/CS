#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x0, x1, y0, y1, i;
    float x, y, dx, dy, steps;

    cout << "Enter the p1 coordinates: " << endl;
    cin >> x0 >> x1;

    cout << "Enter the p2 coordinates: " << endl;
    cin >> y0 >> y1;

    dx = x1 - x0;
    dy = y1 - y0;

    if (fabs(dx) >= fabs(dy))
    {
        steps = fabs(dx);
    }

    else
    {
        steps = fabs(dy);
    }

    dx = dx / steps;
    dy = dy / steps;

    x = x0;
    y = y0;


    for(int i = 0 ; i < steps ; i++)
    {
        x += dx;
        y += dy;
        
        cout << x << ", "<<y<< endl;
    }
}