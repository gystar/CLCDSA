#include <stdio.h>
#include <math.h>

int main(void){
  int N,K;
  scanf("%d%d",&N,&K);

  long ans = K;

  ans *= (long)pow((K-1),N-1);
  printf("%ld\n",ans);

  return 0;
} 