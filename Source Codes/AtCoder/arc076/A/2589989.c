#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

#define M 1000000007
ll factm(ll n,ll m){ll x=1;while(n)x=x*n--%m;return x;}

int main(){
	ll n,m;
	scanf("%lld%lld\n",&n,&m);
	if(llabs(n-m)>1)puts("0");	
	else printf("%lld\n",factm(n,M)*factm(m,M)*(n==m?2:1)%M);
} 