#include <stdio.h>
int main(void){
	long long int a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	a%=1000000007;
	b%=1000000007;
	c%=1000000007;
	printf("%lld\n",(((a*b)%1000000007)*c)%1000000007);
	return 0;
} 