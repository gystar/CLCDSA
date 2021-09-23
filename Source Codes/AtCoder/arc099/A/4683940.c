#include<stdio.h>
int main() {
	int N, K;
	int tmp = 0, ans = 0;
	scanf("%d%d", &N, &K);
	int *A = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	while (tmp < N)
	{
		if (tmp == 0)
		{
			tmp += K;
		}
		else if (tmp > 0)
		{
			tmp += (K - 1);
		}
		ans++;
	}
	printf("%d\n", ans);

	return 0;
} 