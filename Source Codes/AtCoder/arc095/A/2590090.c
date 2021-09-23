#include <stdio.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}

ll n;
ll a[200010];
ll b[200010];
int main(){
	scanf("%lld",&n);
	rep(i,0,n){
		scanf("%lld",a+i);
		b[i]=a[i];
	}
	sortup(b,n);
	rep(i,0,n)printf("%lld\n",a[i]<=b[n/2-1]?b[n/2]:b[n/2-1]);
} 