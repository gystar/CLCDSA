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
	TLong temp;
	scanf("%lld",&n);
	for (TLong i = 1; i * i <= n; ++i)	temp = i * i;
	printf("%lld\n", temp);
	return 0;
} 