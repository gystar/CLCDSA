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
	char str[7];
	scanf("%s",str);
	for (int i = 0; i < 3; ++i)
	{
		if(str[i] == '1')	printf("9");
		else printf("1");
	}
	puts("");
  return 0;
} 