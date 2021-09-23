#include <stdio.h>
int main(void)
{
	long long int n,v=1;
	scanf("%lld",&n);
	while(n!=0){
		v=v*n%1000000007;
		n--;
	}
	printf("%lld\n",v);
	return 0;
} 