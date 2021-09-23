#include <stdio.h>
int main(void){
	long long int n;
	scanf("%lld",&n);
	if(n%2==0) printf("%lld\n",n);
	else printf("%lld\n",n*2);
	return 0;
} 