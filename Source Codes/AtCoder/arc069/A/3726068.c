#include<stdio.h>

int main(void)
{
	unsigned long long n, m, s;
	
	scanf("%llu%llu", &n, &m);
	if (m <= 2 * n)
	    s = m / 2;
	else
	    s = n + (m - 2 * n) / 4;
	printf("%llu\n", s);
	
	return 0;
} 