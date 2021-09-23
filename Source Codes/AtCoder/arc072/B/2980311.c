#include <stdio.h>
#include <math.h>

int main(void){
  int x,y;
  scanf("%d%d",&x,&y);
  if(abs(x-y) <= 1)printf("Brown");
  else printf("Alice");
  return 0;
} 