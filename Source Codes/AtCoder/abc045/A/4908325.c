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
	int a,b,h;
	scanf("%d %d %d",&a,&b,&h);
	printf("%d\n",(a + b) * h / 2);
	return 0;
} 