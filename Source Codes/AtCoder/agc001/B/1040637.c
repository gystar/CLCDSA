#include <stdio.h>

int main(void){
  long long N,X;
  scanf("%lld%lld",&N,&X);
  if(X > N/2){
    X = N - X;
  }
  long long sum = 0;
  long long k;
  sum += X + N - X;
  N = N - X;
  while(X != 0){
    sum += 2*X*(N/X);
    k = N % X;
    N = X;
    X = k;
  }

  sum -= N;

  printf("%lld",sum);

} 