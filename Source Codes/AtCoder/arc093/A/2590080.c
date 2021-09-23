#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll n;
ll a[100010];
int main(){
	scanf("%lld",&n);
	rep(i,0,n)scanf("%lld",a+i+1);
	ll s=0;
	rep(i,0,n+1)s+=llabs(a[i]-a[i+1]);
	rep(i,1,n+1){
		printf("%lld\n",s-llabs(a[i-1]-a[i])-llabs(a[i]-a[i+1])+llabs(a[i-1]-a[i+1]));
	}
} 