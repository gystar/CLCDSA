#include <stdio.h>

int main(void){
  long long A,B;
  int K;

  scanf("%lld%lld%d",&A,&B,&K);

  for(int i = A;i < A+K && i <= B;i++){
    printf("%d\n",i);
  }
  for(int i = B-K+1;i <= B;i++){
    if(i >= A+K)
      printf("%d\n",i);
  }

  return 0;
} 