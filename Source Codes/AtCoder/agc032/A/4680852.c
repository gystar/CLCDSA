#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int N, b[101], ans[101];
	int i,j;
	scanf("%d", &N);
	int N_copy = N;
	for (i = 1;i <=N;i++)
	{
		scanf("%d", &b[i]);
		if (b[i] > i)
		{
			printf("-1\n");
			return 0;
		}
	}
	for ( i=N;N>0;i--)
	{
		if (b[i] == i)
		{
			ans[N] = b[i];
			for (j=i;j<N;j++)
			{
				b[j] = b[j+1];
			}
			N--;
			i = N+1;
		}
	}

	for (i=1;i<=N_copy;i++)
	{
		printf("%d\n", ans[i]);
	}

	return 0;
} 