#include <stdio.h>
int main(void){
	long long int a,b;
	scanf("%lld%lld",&a,&b);
	if((a+b)>=(a-b) && (a+b)>=(a*b)) printf("%lld\n",a+b);
	else if((a-b)>=(a+b) && (a-b)>=(a*b)) printf("%lld\n",a-b);
	else printf("%lld\n",a*b);
	return 0;
} 