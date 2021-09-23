#include<stdio.h>
int main(){
  long long s=0,a,b,n,c=1e18;
  scanf("%lld",&n);
  while(n--){
    scanf("%lld %lld",&a,&b);
    s+=a;
    if(a>b&&c>b)c=b;
  }
  if(s<c)c=s;
  printf("%lld\n",s-c);
  return 0;
} 