#include<stdio.h>
int main()
{
	long long int mod = 1e9+7;
	long long int m = 1;
	int n,i;
	scanf("%d",&n);
	for(i = 1;i<=n;i++)
	{
		m = (m * i) % mod;
	} 
	printf("%lld",m);
	return 0;
} 