#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

int main(){
	ll k;
	scanf("%lld",&k);
	puts("50");
	rep(i,0,50)printf("%lld%c",(49+k/50)+(i<k%50?51-k%50:-k%50),i==49?'\n':' ');
	return 0;
} 