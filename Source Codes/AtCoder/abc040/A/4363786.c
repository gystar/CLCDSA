#include <stdio.h>
#include <math.h>
int main(void){
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d",(int)fmin(x-y,y-1));
  return 0;
} 