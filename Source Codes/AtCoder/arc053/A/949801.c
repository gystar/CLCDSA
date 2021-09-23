#include <stdio.h>

int main(void)
{
  int h, w;
  scanf("%d %d", &h, &w);

  printf("%d\n", 2 * w * h - h - w);

  return 0;
} 