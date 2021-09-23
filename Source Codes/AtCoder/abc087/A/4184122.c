#include <stdio.h>

int main(void){
  int A,B,X;
  scanf("%d%d%d",&X,&A,&B);

  printf("%d\n",(X-A)%B);

  return 0;
} 