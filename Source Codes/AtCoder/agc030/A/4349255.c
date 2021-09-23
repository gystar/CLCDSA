#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int ans;
  if (c <= a + b + 1)
    ans = b + c;
  else
    ans = b + a + b + 1;

  printf("%d\n", ans);

  return 0;
} 