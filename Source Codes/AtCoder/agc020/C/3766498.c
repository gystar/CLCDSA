#include <stdio.h>
#define ll long long
#define ull unsigned ll
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define min(p,q)((p)<(q)?(p):(q))
#define bit(n,m)(((n)>>(m))&1)

ll a[2010];
ull s[40010];
ll sum;
int main(){
	int n;
	scanf("%d",&n);
	rep(i,0,n){
		scanf("%lld",a+i);
		sum+=a[i];
	}
	//sum/2???????????sum-(sum/2??????????)

	//i?????bit(s[i/64],i%64)?1
	s[0]=1;
	rep(i,0,n){
		for(int j=34000-a[i]/64;j>=0;j--){
			if(a[i]%64)s[j+a[i]/64+1]|=s[j]>>(64-a[i]%64);
			s[j+a[i]/64]|=s[j]<<(a[i]%64);
		}
	}
	for(ll ans=sum/2;;ans--)if(bit(s[ans/64],ans%64)){
		printf("%lld",sum-ans);
		return 0;
	}
} 