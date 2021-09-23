#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll n,t;
ll a[200010];
ll ans;
int main(){
	scanf("%lld%lld\n",&n,&t);
	rep(i,0,n)scanf("%lld\n",a+i);
	rep(i,1,n)ans+=min(a[i]-a[i-1],t);
	printf("%lld\n",ans+t);
} 