#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}

ll a[100010];
int main(){
	int n;
	scanf("%d",&n);
	rep(i,0,n)scanf("%d",a+i);
	sortup(a,n);
	rep(i,1,n)a[i]+=a[i-1];
	ll index=0;
	rep(i,1,n)if(a[i-1]*3<a[i])index=i;
	printf("%lld\n",n-index);
	return 0;
} 