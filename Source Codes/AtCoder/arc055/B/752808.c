#include <stdio.h>
#include <string.h>

double dp[1001][1001];
short N, K, i;

int main() {
  scanf("%hd %hd", &N, &K);
  dp[0][0] = 0;
  for (int n = 1; n <= N; ++n) {
    dp[n][0] = 0;
    dp[n][n] = 1.0 * n / N;
    for (int k = 1; k <= K; ++k) {
      double pn = 1.0 / (N - n + 1);
      double np = 1.0 / N + pn * dp[n - 1][k - 1] + (1 - pn) * dp[n - 1][k];
      dp[n][k] = dp[n - 1][k];
      if (dp[n][k] < np) dp[n][k] = np;
    }
  }
  printf("%.8lf\n", dp[N][K]);
} 