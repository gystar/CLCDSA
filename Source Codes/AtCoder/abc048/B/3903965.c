#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	ll a,b,x;
	scanf("%lld%lld%lld",&a,&b,&x);
	if(a)printf("%lld",b/x-(a-1)/x);
	else printf("%lld",b/x+1);
} 