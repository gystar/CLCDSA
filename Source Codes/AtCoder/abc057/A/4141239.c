#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  a +=b;
  a = a % 24;
  printf("%d\n", a);
  return 0;
} 