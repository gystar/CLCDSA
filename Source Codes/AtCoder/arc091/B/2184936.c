#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define INF ((1LL<<62)-(1LL<<31))

ll n,k;
ll ans;
int main(){
	scanf("%lld%lld",&n,&k);
	rep(b,k+1,n+1){
		//???????????
		ll up=n/b;
		//??up?????????
		ans+=up*(b-k);
		//???0???
		if(k==0)ans--;
		//??up????n%b?????
		if(n%b>=k)ans+=n%b-k+1;
//		printf("%lld ",ans);
	}
	printf("%lld\n",ans);
} 