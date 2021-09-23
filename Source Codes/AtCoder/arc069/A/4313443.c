#include<stdio.h>
int main() {
	long long N, M, ans = 0;
	scanf("%lld%lld", &N, &M);

	if (M >= N * 2)//N:M <= 1:2
	{
		ans += N;
		M -= 2 * N;
		ans += M / 4;
	}
	else if (M < N * 2)//N:M > 1:2
	{
		ans += M/2;
	}
	printf("%lld\n", ans);
	return 0;
} 