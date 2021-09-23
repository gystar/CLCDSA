#include<stdio.h>

int main(){
  long long L[87], N;
  
  scanf("%lld", &N);
  
  L[0] = 2;
  L[1] = 1;
  for (int i = 2; i <= N; i++){
    L[i] = L[i - 1] + L[i - 2];
  }
  
  printf("%lld\n", L[N]);
  
  return 0;
} 