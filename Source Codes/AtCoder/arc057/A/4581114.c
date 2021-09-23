#include<stdio.h>

#define bb 2000000000000

int main(){
	long long a,k,ans=0;
	scanf("%lld%lld",&a,&k);
	if(k>=1){
		while(a<bb){
			a+=a*k+1;
			ans++;
		}
	}else ans=bb-a;
	printf("%lld\n",ans);
	return 0;
} 