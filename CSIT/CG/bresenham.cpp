#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int x0, y0, x1, y1, m, dy, dx, pk, pkk;
    float xk, xkk, yk, ykk;

    printf("enter co-ordinate for p1 : \n");
    scanf("%d %d", &x0, &y0);
    printf("enter co-ordinate for p2 : \n");
    scanf("%d %d", &x1, &y1);

    dy = y1 - y0;
    dx = x1 - x0;
    m = dy / dx;

    if (m < 1)
    {
        pk = (2 * dy) - dx;
        xk = x0;
        yk = y0;

        pkk = pk;

        do
        {
            if (pkk < 0)
            {
                xkk = xk + 1;
                ykk = yk;
                printf("%d,%d\n", (int)round(xkk), (int)round(ykk));
                xk = xkk;
                yk = ykk;
                pkk = pk + (2 * dy);
            }
            else
            {
                xkk = xk + 1;
                ykk = yk + 1;
                printf("%d,%d\n", (int)round(xkk), (int)round(ykk));
                xk = xkk;
                yk = ykk;
                pkk = pk + (2 * dy) - (2 * dx);
            }
        } while (xkk < x1 && ykk < y1);
    }

    else
    {
        pk = (2 * dx) - dy;
        xk = x0;
        yk = y0;
        pkk = pk;

        do
        {
            if (pkk < 0)
            {
                xkk = xk;
                ykk = yk + 1;
                printf("%d,%d\n", (int)round(xkk), (int)round(ykk));
                xk = xkk;
                yk = ykk;
                pkk = pk + (2 * dx);
            }
            else
            {
                xkk = xk + 1;
                ykk = yk + 1;
                printf("%d,%d\n", (int)round(xkk), (int)round(ykk));
                xk = xkk;
                yk = ykk;
                pkk = pk + (2 * dx) - (2 * dy);
            }
        } while (xkk < x1 && ykk < y1);
    }

    return 0;
}