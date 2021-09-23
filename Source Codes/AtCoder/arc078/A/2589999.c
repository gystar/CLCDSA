#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll n;
ll a[200010];
ll ans=INF;
int main(){
	scanf("%lld",&n);
	rep(i,0,n)scanf("%lld",a+i);
	ll goukei=0;
	rep(i,0,n)goukei+=a[i];
	ll s=0;
	rep(i,0,n-1){
		s+=a[i];
		ans=min(ans,llabs(goukei-2*s));
	}
	printf("%lld\n",ans);
} 