#include <stdio.h>

int main()
 {
  int a, b, x, y, t, gcd,T, lcm;
  scanf("%d",&T);
  while(T--)
{

  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0)
 {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  printf("LCM = %d\n",lcm);
}
  return 0;
}
