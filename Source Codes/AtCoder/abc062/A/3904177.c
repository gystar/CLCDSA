#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll a[99]={0,0,2,0,1,0,1,0,0,1,0,1,0};
int main(){
	ll n,m;
	scanf("%lld%lld",&n,&m);
	puts(a[n]==a[m]?"Yes":"No");
} 