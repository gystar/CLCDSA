#include<stdio.h>
#include <stdlib.h>
int main() {
	int N;
	scanf("%d", &N);
	long long *A = (long long *)malloc(sizeof(long long)*N);
	long long cltsum = 0, total = 0;
	long long tmp = 0, min = 100000000000;
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &A[i]);
		total += A[i];
	}
	for (int i = 0; i < N - 1; i++)
	{
		cltsum += A[i];
		tmp = llabs(cltsum - (total - cltsum));
		if (tmp < min)
		{
			min = tmp;
		}
	}
	printf("%lld\n", min);

	return 0;
} 