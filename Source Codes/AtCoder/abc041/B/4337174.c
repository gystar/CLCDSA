#include <stdio.h>
#define mod 1000000007

int main(void){
  long A,B,C;
  scanf("%ld%ld%ld",&A,&B,&C);

  long long ans = A*B;
  ans %= mod;
  ans *= C;
  ans %= mod;
  printf("%lld\n",ans);

  return 0;
} 