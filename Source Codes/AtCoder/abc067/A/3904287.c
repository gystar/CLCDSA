#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	ll a,b;
	scanf("%lld%lld",&a,&b);
	puts(a%3==0||b%3==0||(a+b)%3==0?"Possible":"Impossible");
} 