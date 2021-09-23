#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))


ll f(ll k){
	int ans=0;
	while(k){
		ans++;
		k/=10;
	}
	return ans;
}

ll n;
int main(){
	scanf("%lld",&n);
	ll k=sqrt(n);
	while(1){
		if(n%k==0){
			printf("%lld\n",f(n/k));
			return 0;
		}
		k--;
	}
} 