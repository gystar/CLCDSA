#include<stdio.h>
int main()
{
	long a[200000];
	long i, j, N;
	long sum1 = 0, min = 2000000000,sum2=0;
	scanf("%ld", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%ld", &a[i]);
		sum1 += a[i];
	}
	for (i = 0; i < N-1; i++)
	{
		sum2 += a[i];
		if (sum1>2 * sum2)
		{
			j = sum1 - 2 * sum2;
			if (min < j)
				min = min;
			else
				min = j;
		}
		else
		{
			j =  2 * sum2 - sum1;
			if (min < j)
				min = min;
			else
				min = j;
		}
	}
	printf("%ld", min);
	return 0;
} 