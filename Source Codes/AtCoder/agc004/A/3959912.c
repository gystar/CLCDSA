#include<stdio.h>

int main(){
  long a,b,c;scanf("%ld%ld%ld",&a,&b,&c);
  if(a%2==0||b%2==0||c%2==0){
    puts("0");
  }else {
    long long ans=a*b;
    if(ans>b*c)ans=b*c;
    if(ans>c*a)ans=c*a;
    printf("%lld\n",ans);
  }
  return 0;
} 