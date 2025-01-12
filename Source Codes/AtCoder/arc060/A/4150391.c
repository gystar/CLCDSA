//dp[i][j][k] = i?????????j???????k??????
//?????????dp[i + 1][j][k] += dp[i][j][k]
//?????????dp[i + 1][j + 1][k + x[i]] += dp[i][j][k]

#include<stdio.h>
long long int dp[51][51][2510] = { { { 1 } } };
int main() {
	int N, A;
	scanf("%d%d", &N, &A);
	int *X = (int *)malloc(sizeof(int)*N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &X[i]);
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			for (int k = 0; k <= 2500; k++)//
			{
				if (k < X[i]) {
					dp[i][j][k] = dp[i - 1][j][k];
				}
				else if (j >= 1) {
					dp[i][j][k] = dp[i - 1][j - 1][k - X[i]] + dp[i - 1][j][k];
				}
			}
		}
	}
		long long int ans = 0;
		for (int j = 1; j <= N; j++) {
			ans += dp[N][j][j*A];
		}
		printf("%lld\n", ans);
		return 0;
	} 