#include <stdio.h>
#define ll long long int
int main(void){
	ll a,b,c,max=0;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a+b < c)max = a+2*b+1;
	else max = b+c;
	printf("%lld",max);
	return 0;
} 