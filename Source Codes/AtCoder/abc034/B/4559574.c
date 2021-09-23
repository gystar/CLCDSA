#include <stdio.h>
int main(void){
	long long int n;
	scanf("%lld",&n);
	if(n%2==1) printf("%lld\n",n+1);
	else printf("%lld\n",n-1);
	return 0;
} 