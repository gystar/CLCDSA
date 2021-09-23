#include <stdio.h>
int main(void){
	long long int a,b,c,d=1000000007;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld\n",a%d*b%d*c%d);
	return 0;
} 