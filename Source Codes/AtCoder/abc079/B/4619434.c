#include<stdio.h>
int N, i;
long long int A[2];
int main(){
  scanf("%d", &N);
  A[0] = 2;
  A[1] = 1;
  for(i=2; i<=N; i++){
    A[i&1] += A[(i+1)&1];
  }
  printf("%lld\n", A[N&1]);
} 