#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
ll gcd(ll p,ll q){for(ll t;q;)t=p%q,p=q,q=t;return p;}

int main(){
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	puts(c%gcd(a,b)==0?"YES":"NO");
} 