#include <stdio.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll n;
ll check[1010];
ll root[1010];
ll x[1010];
ll y[1010];


ll ko[1010];
ll kocnt;
ll dp[5010];
void f(ll k){//??k????????

	//?????????????
	check[k]=1;
	rep(i,0,n)if(root[i]==k&&!check[i])f(i);
	
	kocnt=0;
	rep(i,0,n)if(root[i]==k)ko[kocnt++]=i;

	//x[k]?????????dp
	rep(i,0,5010)dp[i]=0;
	dp[0]=1;
	
	ll base=0;
	rep(i,0,kocnt){
		base+=min(x[ko[i]],y[ko[i]]);
		ll d=max(x[ko[i]],y[ko[i]])-min(x[ko[i]],y[ko[i]]);
		for(ll j=5005;j>=d;j--)if(dp[j-d])dp[j]=1;
	}
	if(base>x[k]){
		puts("IMPOSSIBLE");
		exit(0);
	}
	for(ll j=x[k]-base;j>=0;j--)if(dp[j]){
		//j+base=Z
		//??????X+?Y-Z
		ll ans=-j-base;
		rep(i,0,kocnt)ans+=x[ko[i]]+y[ko[i]];
		y[k]=ans;
		break;
	}
}

int main(){
	scanf("%lld",&n);
	root[0]=-1;
	rep(i,1,n){
		ll t;
		scanf("%lld",&t);
		root[i]=t-1;
	}
	rep(i,0,n)scanf("%lld",x+i);
	
	f(0);
	puts("POSSIBLE");
//	rep(i,0,n)printf("%lld ",y[i]);
	return 0;
} 