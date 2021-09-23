#include <stdio.h>

int main(void){
  int x, t;
  scanf("%d %d", &x, &t);
  x -= t;
  if(x < 0) x = 0;
  printf("%d\n", x);
  return 0;
} 