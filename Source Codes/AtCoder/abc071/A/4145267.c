#include <stdio.h>

int main(void){
  int x, a, b;
  scanf("%d %d %d", &x, &a, &b);
  a -= x;
  b -= x;
  if(a < 0) a = -a;
  if(b < 0) b = -b;
  if(a > b) printf("B\n");
  else printf("A\n");
  return 0;
} 