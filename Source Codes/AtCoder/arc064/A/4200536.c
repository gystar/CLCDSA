#include<stdio.h>
int main() {
	int N, X;
	scanf("%d%d", &N, &X);
	int *A = (int *)malloc(sizeof(int)*N);
	long long ans = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (i >= 1 && A[i] + A[i - 1] > X) {
			int tmp = A[i] + A[i - 1];
			if (A[i] + A[i - 1] - X <= A[i]) {
				A[i] = A[i] - (A[i] + A[i - 1] - X);
			}
			else {
				A[i] = 0;
				A[i - 1] = A[i - 1] - (A[i] + A[i - 1] - X);
			}
			ans += tmp - (A[i] + A[i - 1]);
			//printf("%d:%lld\n", i,ans);
		}
	}
	printf("%lld\n", ans);
	return 0;
} 