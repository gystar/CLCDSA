#include<stdio.h>
int main() 
{
	long long n, m;
	scanf("%lld%lld", &n, &m);
	if (2 * n <= m)
		printf("%lld\n", (m - n * 2) / 4 + n);
	else
		printf("%lld\n", m / 2);
	return 0;
} 