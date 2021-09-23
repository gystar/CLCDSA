#include <stdio.h>

int main(){
  long long int a,b,x;
  scanf("%lld%lld%lld", &a, &b, &x);
  long long int ans = ((b + x) / x) - ((a - 1 + x) / x);
  printf("%lld\n", ans);
  return 0;
} 