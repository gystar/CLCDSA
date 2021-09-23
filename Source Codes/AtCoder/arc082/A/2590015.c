#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll n;
ll aa[100010],*a=aa+1;
ll ans;
int main(){
	scanf("%lld",&n);
	rep(i,0,n){
		ll t;
		scanf("%lld",&t);
		a[t-1]++;
		a[t]++;
		a[t+1]++;
	}
	rep(i,0,100000)ans=max(ans,a[i]);
	printf("%lld\n",ans);
} 