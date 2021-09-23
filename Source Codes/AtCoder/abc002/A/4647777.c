#include <stdio.h>

int main(void) {
  int X, Y;
  scanf("%d %d", &X, &Y);
  printf("%d\n", X > Y ? X : Y);
  
  return 0;
} 