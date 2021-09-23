#include <stdio.h>

int main(void){
  int a, b;
  scanf("%d %d" , &a, &b);
  int flag = 0;
  if(a % 3 == 0) flag = 1;
  if(b % 3 == 0) flag = 1;
  if( (a + b) % 3 == 0) flag = 1;
  if(flag) printf("Possible\n");
  else printf("Impossible\n");
  return 0;
} 