#include <stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a == b) printf("%d\n" , c);
  if(b == c) printf("%d\n" , a);
  if(c == a) printf("%d\n" , b);
  return 0;
} 