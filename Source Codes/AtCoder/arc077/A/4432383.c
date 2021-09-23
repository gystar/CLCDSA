#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int *A = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	if (N % 2 == 0)
	{
		for (int i = N - 1; i > 0; i -= 2)
		{
			printf("%d ", A[i]);
		}
		for (int i = 0; i < N; i += 2)
		{
			printf("%d ", A[i]);
		}
	}
	if (N % 2 == 1)
	{
		for (int i = N - 1; i >= 0; i -= 2)
		{
			printf("%d ", A[i]);
		}
		for (int i = 1; i < N; i += 2)
		{
			printf("%d ", A[i]);
		}
	}
	return 0;
} 