#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

ll a[100010];
ll ans;
int main(){
	int n;
	scanf("%d",&n);
	rep(i,1,n+1)scanf("%lld",a+i);
	rep(i,1,n+1)if(a[i]==i){
		ans++;
		i++;
	}
	printf("%lld\n",ans);
	return 0;
} 