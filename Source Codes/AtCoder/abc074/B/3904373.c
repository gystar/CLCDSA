#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	ll n,k;
	scanf("%lld%lld",&n,&k);
	ll ans=0;
	rep(i,0,n){
		ll x;
		scanf("%lld",&x);
		ans+=min(k-x,x);
	}
	printf("%lld",ans*2);
} 