#include <stdio.h>

int main(void){
  int m;
  scanf("%d", &m);
  m -= 24;
  m = -m;
  printf("%d\n", m + 24);
  return 0;
} 