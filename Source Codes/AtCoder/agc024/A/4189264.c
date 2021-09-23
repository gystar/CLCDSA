#include<stdio.h>

int main(){
		long long a,b,c,k,ans;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
		ans=a-b;
		if(k%2==1)ans=ans*(-1);
		printf("%lld\n",ans);
		return 0;
} 