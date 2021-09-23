#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	TLong n;
	TLong p = 1;
	scanf("%lld",&n);
	for (int i = 2; i <= n; ++i)
	{
		p = p * i % TBMod;
	}
	printf("%lld\n", p);
	return 0;
} 