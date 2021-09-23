#include <stdio.h>
#include <math.h>
int main(void){
  int x,y,z,sum;
  scanf("%d%d%d",&x,&y,&z);
  x-=z;
  int count=x/(y+z);
  printf("%d",count);
  return 0;
} 