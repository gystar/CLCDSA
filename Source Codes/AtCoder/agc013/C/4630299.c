#include <stdio.h>
#include <stdlib.h>
#define ll long long
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
int main(){
  ll n,L,T;
  ll ans[100010];
  scanf("%lld%lld%lld",&n,&L,&T);
  ll cnt=0,i;
  for(i=0;i<n;i++){
    ll x,w;
    scanf("%lld%lld",&x,&w);
    (w==1)?(x+=T):(x-=T);
    cnt-=x/L;
    x%=L;
    if(x<0){
      x+=L;
      cnt++;
    }
    ans[i]=x;
    cnt%=n;
  }
  qsort(ans,n,sizeof(ll),upll);
  for(i=0;i<n;i++)printf("%lld\n",ans[(i-cnt+n)%n]);
} 