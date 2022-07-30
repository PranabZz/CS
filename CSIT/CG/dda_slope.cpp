#include <iostream>
#include <math.h>

int main()
{
  // First we need two points p1 and p2 let the coordinate be x1 and y1 and for p2 be x2 and y2
  int x1, y1, x2, y2;

  // m is a slope i.e dy/dx xk and yk be the coordinate where as the xkk is x(k+1) that means the next corrdinate
  float m, dy, dx, xk, xkk, yk, ykk; 

  printf("Enter P1 co-ordinate of the line :");
  scanf("%d %d", &x1, &y1);
  printf("Enter P2 co-ordinate of the line :");
  scanf("%d %d", &x2, &y2);

  dy = y2 - y1;
  dx = x2 - x1;
  m = dy / dx;

  // If the value of dx is greater than or equals to dy then x(k+1) = xk + 1 increment of x coordinate with 1
  // y(k+1) = yk + m  

  if (fabs(dx) >= fabs(dy))
  {
    xk = x1;
    yk = y1;

    printf("Connecting the following lines... :\n%d %d \n", x1, y1);
    do
    {
      xkk = xk + 1;
      ykk = yk + m;
      printf("%d,%d\n", (int)round(xkk), (int)round(ykk));
      xk = xkk;
      yk = ykk;
    } while (xkk < x2 && ykk < y2);
  }


  /** Else dy > dx is the case then x(k+1) = xk + (1/m) 
      dy = 1 --- (1) , m = dy/dx --- (2) so,
      from (1) and (2) we get 
      dx = 1/m
  **/

  else
  {

    xk = x1;
    yk = y1;

    printf("Connect the following lines.... :\n%d %d \n", x1, y1);
    do
    {
      xkk = xk + (1 / m);
      ykk = yk + 1;
      printf("%d,%d\n", (int)round(xkk), (int)round(ykk));
      xk = xkk;
      yk = ykk;
    } while (xkk < x2 && ykk < y2);
  }
}
