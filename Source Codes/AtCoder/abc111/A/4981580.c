#include <stdio.h>

int main(void)
{
  int n;
  int a, b, c;
  scanf("%d", &n);
  c = n % 10;
  n /= 10;
  b = n % 10;
  n /= 10;
  a = n % 10;
  if (a == 1)
    a = 9;
  else
    a = 1;
  if (b == 1)
    b = 9;
  else
    b = 1;
  if (c == 1)
    c = 9;
  else
    c = 1;
  printf("%d", a * 100 + b * 10 + c);
} 