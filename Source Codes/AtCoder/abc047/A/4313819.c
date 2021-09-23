#include <stdio.h>

int main(void){
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);

  if(A+B == C || B+C == A || C+A == B) printf("Yes\n");
  else printf("No\n");

  return 0;
} 