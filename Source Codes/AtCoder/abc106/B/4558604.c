#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int i,N;
	int cnt,cnt8 = 0;
	scanf("%d",&N);
	for (i = 1; i <= N; i += 2)
	{
		cnt = 0;
		for (int j = 1; j <= i ; j += 2)
		{
			if(i % j == 0)	++cnt;
		}
		if(cnt == 8)	++cnt8;
	}
	printf("%d\n", cnt8);
	return 0;
} 