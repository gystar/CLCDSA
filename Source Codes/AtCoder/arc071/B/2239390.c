#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define M 1000000007

ll x[100010],y[100010];
ll n,m;
int main(){
	scanf("%lld%lld",&n,&m);
	rep(i,0,n)scanf("%lld",x+i);
	rep(i,0,m)scanf("%lld",y+i);

	ll xx=0,yy=0;
	rep(i,1,n)xx=(xx+(x[i]-x[i-1])*i%M*(n-i)%M)%M;
	rep(i,1,m)yy=(yy+(y[i]-y[i-1])*i%M*(m-i)%M)%M;
	
	printf("%lld\n",xx*yy%M);
	return 0;
} 