#include<stdio.h>
#include<stdlib.h>
int main(){
  long long  n,a,b,c,d,i;
  scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);
  b=labs(b-a);
  n--;
  for(i=0;i<n;i++){
    if(d*(n-i)-i*c>=b&&b>=c*(n-i)-i*d)break;
  }
  printf("%s\n",i-n?"YES":"NO");
  return 0;
} 