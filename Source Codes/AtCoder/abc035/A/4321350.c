#include<stdio.h>

int main(void){
  int w,h;
  scanf("%d%d",&w,&h);
  if((w%16==0) && (h%9==0)) printf("16:9\n");
  else printf("4:3\n");
  return 0;
} 