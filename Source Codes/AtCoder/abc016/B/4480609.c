#include <stdio.h>

int main(void){
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);

  if(A-B == C && A+B == C) printf("?");
  else if(A+B == C) printf("+");
  else if(A-B == C) printf("-");
  else printf("!");

  printf("\n");
  return 0;
} 