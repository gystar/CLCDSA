#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int a = n / 100;
  if (n <= a * 100 + a * 10 + a)
    printf("%d", a * 100 + a * 10 + a);
  else
    printf("%d", (a + 1) * 100 + (a + 1) * 10 + a + 1);
} 