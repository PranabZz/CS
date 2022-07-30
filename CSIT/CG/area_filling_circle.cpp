#include <iostream>
using namespace std;

int main()
{
    int r, x, y, f, x1, y1;

    cout << "Enter the points and radius" << endl;
    cin >> x >> y >> r;

    

    do
    {
        f = (x * x) + (y * y) - (r * r);

        if (f <= 0)
        {
            x1 = x;
            y1 = y + 1;
            cout << x1 << ", " << y1 << endl;
        }
        else
        {
            x1 = x - 1;
            y1 = y + 1;
            cout << x1 << ", " << y1 << endl;
        }
    }while (x1 == x && y1 == y);
}