#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int n,x;
  scanf("%d%d",&n,&x);
  int d=fmin(n-x,x-1);
  printf("%d",d);
  return 0;
} 