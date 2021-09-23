#include<stdio.h>
int main(){
  long long a,b,c,d;
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
  a-=b;
  printf("%d",a-2*a*(d%2));
} 