#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

ll ans;
ll d[100010];
int main(){
	int n;
	scanf("%d",&n);
	rep(i,0,n)scanf("%lld",d+i);
	rep(i,0,n)if(d[i]>=3){
		ans+=(d[i]-1)/2;
		d[i]-=(d[i]-1)/2*2;
	}
	rep(i,0,n){
		if(d[i]==2){
			ans++;
		}else if(d[i]&&d[i+1]){
			ans++;
			d[i+1]--;
		}
	}
	printf("%lld\n",ans);
	return 0;
} 