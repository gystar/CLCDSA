#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))

#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define INF ((1LL<<62)-(1LL<<31))

ll n;
ll ans;
int main(){
	scanf("%lld",&n);
	while(n--){
		ll n,k;
		scanf("%lld%lld",&n,&k);
		while(n>k){
			ll cnt=(n%k)/(n/k+1);
			n-=cnt*(n/k+1);
			if(n%k==0)break;
			n-=n/k+1;
		}
		ans^=n/k;
	}
	puts(ans?"Takahashi":"Aoki");
	return 0;
} 