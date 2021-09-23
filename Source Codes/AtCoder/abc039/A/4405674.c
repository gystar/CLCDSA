#include <stdio.h>
int main(void){
	long long int a,b,c,hyoumenseki;
	scanf("%lld%lld%lld",&a,&b,&c);
	hyoumenseki=2*(a*b)+2*(b*c)+2*(c*a);
	printf("%lld\n",hyoumenseki);
	return 0;
} 