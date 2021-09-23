#include <stdio.h>

int main(void){
  int A,B,C,K;
  int S,T;
  scanf("%d%d%d%d",&A,&B,&C,&K);
  scanf("%d%d",&S,&T);

  int money = A*S+T*B;
  if(S+T >= K) money -= C*(S+T);

  printf("%d\n",money);

  return 0;
} 