#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	ll n;
	scanf("%lld",&n);
	ll temp=n,s=0;
	while(temp){
		s+=temp%10;
		temp/=10;
	}
	puts(n%s==0?"Yes":"No");
} 