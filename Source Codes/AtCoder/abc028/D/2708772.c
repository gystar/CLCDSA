#include <stdio.h>

int main(void)
{
    long double N, K, ans;

    scanf("%Lf %Lf", &N, &K);

    ans = 6 * (K-1)/N * 1/N * (N-K)/N + 3 * 1/N * 1/N * (N-1)/N + 1 * 1/N * 1/N * 1/N;

    printf("%.12Lf\n", ans);

    return 0;
} 