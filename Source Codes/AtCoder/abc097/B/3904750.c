#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	ll x;
	scanf("%lld",&x);
	ll b=sqrt(x);
	ll ans=1;
	rep(i,2,b+1){
		ll t=i*i;
		while(t<=x){
			ans=max(ans,t);
			t*=i;
		}
	}
	printf("%lld",ans);
} 