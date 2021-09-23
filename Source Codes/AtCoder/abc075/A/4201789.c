#include <stdio.h>

int main(void){
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  
  int ans = A;

  if(A == B) ans = C;
  if(A == C) ans = B;

  printf("%d\n",ans);

  return 0;
} 