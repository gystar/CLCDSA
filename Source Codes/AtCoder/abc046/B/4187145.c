#include<stdio.h>

int main(){
  int N, K, i, r;
  
  scanf("%d %d", &N, &K);
  
  r = K;
  for (i = 1; i < N; i++){
    r *= K - 1;
  }
  printf("%d\n", r);
  
  return 0;
} 