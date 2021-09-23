#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define chmax(p,q)(p=max(p,q))
#define bit(n,m)(((n)>>(m))&1)

ll n,k;
ll s[50];
ll dp[50][2];
int main(){
	scanf("%lld%lld",&n,&k);
	rep(i,0,n){
		ll t;
		scanf("%lld",&t);
		rep(j,0,50)if(bit(t,j))s[j]++;
	}
	rep(i,0,45)rep(f,0,2)rep(j,0,2)chmax(dp[i+1][j<bit(k,i)||(j==bit(k,i)&&f)],dp[i][f]+((j?n-s[i]:s[i])<<i));
	printf("%lld",dp[42][1]);
} 