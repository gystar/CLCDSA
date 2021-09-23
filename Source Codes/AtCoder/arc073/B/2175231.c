#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define rep(i,l,r) for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll dp[101000];
ll v[110],w[110];

int main(){
	int n,W;
	scanf("%d%d",&n,&W);
	rep(i,0,n)scanf("%d%d",w+i,v+i);
	
	if(w[0]>=1000){
		ll q=W/w[0],r=W%w[0];
		if(r>500)r=500;
		W=900*q+r;
		rep(i,1,n)w[i]=900+(w[i]-w[0]);
		w[0]=900;
	}
	
	dp[0]=1;
	rep(i,0,n)for(ll k=100000;k>=0;k--)if(dp[k])dp[k+w[i]]=max(dp[k+w[i]],dp[k]+v[i]);
	W=min(W,100000);
	ll ans=0;
	rep(i,0,W+1)ans=max(ans,dp[i]);
	printf("%d\n",ans-1);
	return 0;
} 