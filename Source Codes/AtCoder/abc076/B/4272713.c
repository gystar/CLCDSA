#include <stdio.h>
int main(){
  int N, K, sum=1;
  scanf("%d%d", &N ,&K);
  for (int i=0; i<N ; i++){
    if (sum < K){
    sum *= 2;
    }
    else{
      sum += K;
    }
  }
  printf("%d", sum);
  return 0;
} 