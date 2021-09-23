#include<stdio.h>
int main() {
	long long N, M,tmp;
	long long ans = 0;
	scanf("%lld%lld", &N, &M);
	if (N > M) {
		tmp = N;
		N = M;
		M = tmp;
	}
	if (N == 1 && M == 1) {
		ans = 1;
	}
	else if (N == 1 && M != 1)
	{
		ans = M - 2;
	}
	else if (N >= 2) {
		ans = (N - 2)*(M - 2);
	}
	printf("%lld\n", ans);
	return 0;
} 