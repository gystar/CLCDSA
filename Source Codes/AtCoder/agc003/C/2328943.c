#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define rep(i,l,r) for(ll i=(l);i<(r);i++)
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}

ll a[100010];
ll b[100010];
ll n;

ll bs(ll x){
	ll l=0,r=n;
	while(r-l>1){
		ll m=(l+r)/2;
		if(b[m]<=x)l=m;
		else r=m;
	}
	return l;
}

int main(){
	scanf("%d",&n);
	rep(i,0,n)scanf("%lld",a+i);
	rep(i,0,n)b[i]=a[i];
	sortup(b,n);
	
	ll ans=0;
	rep(i,0,n)if(i%2!=bs(a[i])%2)ans++;
	printf("%lld\n",ans/2);
	return 0;
} 