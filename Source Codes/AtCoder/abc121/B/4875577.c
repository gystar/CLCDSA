#include<stdio.h>

int main(void) {
	int N, M, C, B[20], A[200], i, j, count = 0, ans;
	scanf("%d%d%d", &N, &M, &C);
	for (j = 0; j < M; ++j) {
		scanf("%d", &B[j]);
	}
	for (i = 0; i < N; ++i) {
		ans = 0;
		for (j = 0; j < M; ++j) {
			scanf("%d", &A[i, j]);
			ans += A[i, j] * B[j];
		}
		if (ans + C > 0) {
			++count;
		}
	}
	printf("%d", count);
	return 0;
} 