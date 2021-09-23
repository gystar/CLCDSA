#include<stdio.h>
short a, b, c, d, x, y;
int main(void){
  scanf("%hd%hd%hd%hd", &a, &b, &c, &d);
  x=c-a;
  y=d-b;
  printf("%d %d %d %d\n", c-y, d+x, a-y, b+x);
} 