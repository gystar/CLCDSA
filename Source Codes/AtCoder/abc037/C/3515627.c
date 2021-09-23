#include <stdio.h>
int main(void){
	int k,n,i;
	scanf("%d %d",&n,&k);
	long long a[k],tmp,ans=0,set=0;
	for(i=0;i<k;i++){
		scanf("%lld",&a[i]);
		set+=a[i];
	}
	ans+=set;
	int j=0;
	for(i=k;i<n;i++){
		int jj=j%k;
		set-=a[jj];
		scanf("%lld",&a[jj]);
		set+=a[jj];
		j++;
		ans+=set;
	}
	printf("%lld",ans);
	return 0;
} 