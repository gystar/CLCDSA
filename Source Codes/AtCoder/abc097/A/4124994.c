#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);

  if (abs(a - c) <= d || (abs(a - b) <= d && abs(c - b) <= d))
    puts("Yes");
  else
    puts("No");

  return 0;
} 