#include<stdio.h>
#include<math.h>
int main() {
	long long N, M;
	long long ans = 0;
	long long tmpn = 1, tmpm = 1;
	scanf("%lld%lld", &N, &M);
	if (abs(N - M) > 1)
	{
		printf("%lld\n", ans);
	}
	else
	{
		for (long long i = 1; i <= N; i++)
		{
			tmpn = (tmpn * i) % 1000000007;

		}
		for (long long i = 1; i <= M; i++)
		{
			tmpm = (tmpm * i) % 1000000007;

		}
		ans = tmpn * tmpm;
		if (N == M)
		{
			ans *= 2;
		}
		ans = ans % 1000000007;
		printf("%lld\n", ans);
	}
	return 0;
} 