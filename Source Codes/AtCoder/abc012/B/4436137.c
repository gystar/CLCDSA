#include <stdio.h>
int main(void){
	long long int n;
	scanf("%lld",&n);
	printf("%02lld:%02lld:%02lld\n",n/3600,(n%3600)/60,n%60);
	return 0;
} 