#include<stdio.h>

int main(){
		long long a,b,k,l,ans;
		scanf("%lld%lld%lld%lld",&a,&b,&k,&l);
		ans=k/l*b;
		if(a*(k%l)>b)ans+=b;
		else ans+=(k%l)*a;
		printf("%lld\n",ans);
		return 0;
} 