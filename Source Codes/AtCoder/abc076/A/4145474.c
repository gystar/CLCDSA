#include <stdio.h>

int main(void){
  int r, g;
  scanf("%d" , &r);
  scanf("%d" , &g);
  g = 2 * g - r;
  printf("%d\n", g);
  return 0;
} 