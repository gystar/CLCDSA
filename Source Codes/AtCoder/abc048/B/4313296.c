#include <stdio.h>

int main(void){
  long long  a,b,x;
  long long ans = 0;
  scanf("%lld%lld%lld",&a,&b,&x);

  ans += b/x+1;
  if(a != 0) ans -= (a-1)/x+1;

  printf("%lld\n",ans);
  return 0;
} 