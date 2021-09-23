#include<stdio.h>
int main(){
  long long a,b,x;
  scanf("%lld%lld%lld",&a,&b,&x);
  printf("%lld",b/x-a/x+(a%x==0));
} 