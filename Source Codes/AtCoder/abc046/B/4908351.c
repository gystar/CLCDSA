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
	int n,k;
	int pat;
	scanf("%d%d",&n,&k);
	pat = k;
	for (int i = 1; i < n; ++i)	pat *= (k - 1);
	printf("%d\n", pat);
	return 0;
} 