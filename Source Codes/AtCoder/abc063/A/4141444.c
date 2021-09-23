#include <stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d", &a, &b);
  c = a + b;
  if(c <= 9) printf("%d\n", c);
  else printf("error\n");
} 