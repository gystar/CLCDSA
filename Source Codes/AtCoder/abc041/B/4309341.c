#include<stdio.h>
int main(){
  long long a,b,c,d=1000000007;
  scanf("%lld%lld%lld",&a,&b,&c);
  printf("%lld",a%d*b%d*c%d);
} 