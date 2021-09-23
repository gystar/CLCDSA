#include<stdio.h>
int main() {
	int N;
	long long tmp = 0, ans = 0;
	scanf("%d", &N);
	long long *A = (long long *)malloc(sizeof(long long)*N);
	long long *B = (long long *)malloc(sizeof(long long)*N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld%lld", &A[i], &B[i]);
	}
	//for (int i = 0; i < N; i++)
	//{
	//	printf("%lld %lld\n", A[i], B[i]);

	//}
	for (int i = N - 1; i >= 0; i--)
	{
		tmp += (B[i] - (A[i] + tmp) % B[i]) % B[i];
	}
	ans = tmp;
	printf("%lld\n", ans);

	return 0;
} 