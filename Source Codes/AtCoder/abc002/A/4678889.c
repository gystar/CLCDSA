#include <stdio.h>

int main() {
  int max, x, y;
  scanf("%d %d", &x, &y);
  max = (x >= y)? x : y;
  printf("%d\n", max);
  return 0;
} 