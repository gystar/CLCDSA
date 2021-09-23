#include <stdio.h>

int main(void)
{
	int N, K, i, j;
	long a[100000], ans = 0;
	scanf("%d%d", &N, &K);
	for (i = 0; i < N; ++i) scanf("%ld", &a[i]);
	for (i = 0; i < N - K + 1; ++i) {
		for (j = 0; j < K; ++j) ans += a[i + j];
	}
	printf("%ld", ans);
	return 0;
} 