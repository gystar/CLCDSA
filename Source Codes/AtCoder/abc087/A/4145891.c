#include <stdio.h>

int main(void){
  int x, a, b;
  scanf("%d", &x);
  scanf("%d", &a);
  scanf("%d", &b);
  x -= a;
  while(x >= 0) x -= b;
  x += b;
  printf("%d\n", x);
  return 0;
} 