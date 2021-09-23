#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int d=a*b*2+b*c*2+a*c*2;
  printf("%d",d);
  return 0;
} 