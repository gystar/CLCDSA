#include <stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  a += b;
  if(a >= c) printf("Yes\n");
  else printf("No\n");
  return 0;
} 