#include<stdio.h>

int main(){
		long long a,b,x,ans1,ans2;
		scanf("%lld%lld%lld",&a,&b,&x);
		ans1=(a-1)/x;
		ans2=b/x;
		if(b<x){
				if(a==0)puts("1");
				else puts("0");
				return 0;
		}else if(a==0&&x!=1)ans2++;
		printf("%lld\n",ans2-ans1);
		return 0;
} 