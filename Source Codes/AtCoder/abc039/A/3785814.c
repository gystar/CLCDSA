#include<stdio.h>
int a, b, c;
int main(){
  scanf("%d%d%d", &a, &b, &c);
  printf("%d\n", ((b+c)*a+b*c)<<1);
} 