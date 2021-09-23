#include <stdio.h>
int main(void){
	long long int a,b,x;
	scanf("%lld%lld%lld",&a,&b,&x);
	printf("%lld\n",b/x-a/x+(a%x==0));
	return 0;
} 