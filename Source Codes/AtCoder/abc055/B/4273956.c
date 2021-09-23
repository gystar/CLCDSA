#include <stdio.h>
#define mod 1000000007

int main(void){
  int N;
  scanf("%d",&N);

  long long ans = 1;
  for(int i = 1;i <= N;i++){
    ans *= i;
    ans %= mod;
  }

  printf("%lld\n",ans);   

  return 0;
} 