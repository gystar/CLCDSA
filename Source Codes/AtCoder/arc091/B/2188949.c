#include<stdio.h>

int main(void){
	int n,k,a,b;
	long ans=0;
	scanf("%d %d",&n,&k);
	for(b=k+1;b<=n;b++){
		ans=ans+(n/b)*(b-k);
		if(n%b>=k){
			ans=ans+((n%b)-(k-1));
		}
		if(k==0){
			ans--;
		}
	}
	printf("%lld\n",ans);
	return 0;
} 