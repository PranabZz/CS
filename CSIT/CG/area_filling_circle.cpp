#include <iostream>
using namespace std;

int main()
{
    int r, x, y, f, x1, y1,i;

    cout << "Enter the points and radius" << endl;
    cin >> x >> y >> r;

    f = (x * x) + (y * y) - (r * r);
    i = 0;
    do
    {

        if (f <= 0)
        {
            x1 = x;
            y1 = y + 1;
            cout << x1 << ", " << y1 << endl;
            f = f + (2*x1) + 3; 
        }
        else
        {
            x1 = x - 1;
            y1 = y + 1;
            cout << x1 << ", " << y1 << endl;
            f = f + (2*x1) -(2*y1)+ 5; 
        }

        i++;
    }while (i < 4);
}
