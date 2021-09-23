#include <stdio.h>

int main(void){
  long long N,K;
  scanf("%lld%lld",&N,&K);

  printf("%.15lf\n",(double)(1+(N-1)*3+(K-1)*(N-K)*6)/N/N/N);

  return 0;
} 