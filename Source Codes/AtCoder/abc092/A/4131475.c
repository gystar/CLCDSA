#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);

  printf("%d\n", (int)(fmin(a, b) + fmin(c, d)));
  return 0;
} 