#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	ll w,a,b;
	scanf("%lld%lld%lld",&w,&a,&b);
	printf("%lld",a+w<b?b-(a+w):b+w<a?a-(b+w):0);
} 