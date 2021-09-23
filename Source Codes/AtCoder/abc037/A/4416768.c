#include <stdio.h>
#include <math.h>
int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int d=fmin(a,b);
  printf("%d",c/d);
  return 0;
} 