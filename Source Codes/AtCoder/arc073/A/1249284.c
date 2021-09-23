#include<stdio.h>
long long MIN(long long a,long long b){return a<b?a:b;}
int main(){
  long long n,m,a,b,s=0;
  scanf("%lld %lld %lld",&n,&m,&a);
  while(--n){
    scanf("%lld",&b);
    s+=MIN(b-a,m);
    a=b;
  }
  printf("%lld\n",s+m);
  return 0;
} 