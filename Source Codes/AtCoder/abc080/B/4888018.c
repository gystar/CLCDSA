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
	int n,ans = 0;
	int temp,divby = 1000000000;
	scanf("%d",&n);
	temp = n;
	for (int i = 0; i < 10; ++i)
	{
		if(temp < 10){
			ans += temp % 10;
			break;
		}
		else{
			ans += temp / divby;
			temp -= temp / divby * divby;
			divby /= 10;
		}
	}
	if(n % ans == 0)	puts("Yes");
	else puts("No");
	return 0;
} 