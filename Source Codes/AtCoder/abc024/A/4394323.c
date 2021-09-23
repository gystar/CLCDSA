#include <stdio.h>
int main(void){
	long long int a,b,c,k,s,t,money;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
	scanf("%lld%lld",&s,&t);
	if(s+t<k){
		money=a*s+b*t;
	}
	if(s+t>=k){
		money=(a-c)*s+(b-c)*t;
	}
	printf("%lld\n",money);
	return 0;
} 