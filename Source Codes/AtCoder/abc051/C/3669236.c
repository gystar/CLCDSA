#include <stdio.h>
int main(void){
  int x,y,sx,sy,tx,ty,i;
  scanf("%d%d%d%d",&sx,&sy,&tx,&ty);
  x=tx-sx;
  y=ty-sy;
  for(i=0;i<y;i++)
  printf("U");
  for(i=0;i<x;i++)
  printf("R");
  for(i=0;i<y;i++)
  printf("D");
  for(i=0;i<=x;i++)
  printf("L");
  for(i=0;i<=y;i++)
  printf("U");
  for(i=0;i<=x;i++)
    printf("R");
  printf("DR");
  for(i=0;i<=y;i++)
  printf("D");
  for(i=0;i<=x;i++)
  printf("L");
  printf("U\n");
  return 0;
} 