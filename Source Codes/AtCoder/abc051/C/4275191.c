#include <stdio.h>

int main(void){
  int sx,sy,tx,ty;
  scanf("%d%d%d%d",&sx,&sy,&tx,&ty);

  int x = tx-sx;
  int y = ty-sy;

  for(int i = 0;i < y;i++) printf("U");
  for(int i = 0;i < x;i++) printf("R");
  for(int i = 0;i < y;i++) printf("D");
  for(int i = 0;i <= x;i++) printf("L");
  for(int i = 0;i <= y;i++) printf("U");
  for(int i = 0;i < x;i++) printf("R");
  printf("RDR");
  for(int i = 0;i <= y;i++) printf("D");
  for(int i = 0;i < x;i++) printf("L");
  printf("LU\n");

  return 0;
} 