#include <stdio.h>

int main(void) {
    int i, j, N, B[64] = {0};
    long long max, f = 0LL, D, K, A[100010];
    scanf("%d%lld", &N, &K);
    for (i=1;i<=N;i++) {
        scanf("%lld", &A[i]);
        for (j=0;j<=63;j++) {
            if (A[i] & (1LL<<j)) B[j]++;
        }
    }

    max = 0LL;
    if (K > 0) {
        D = 0LL;
        for (j=63-__builtin_clzll(K);j>=0;j--) {
            if (N > 2*B[j] && D + (1LL<<j) <= K) {
                max += (N - 2*B[j]) * (1LL<<j);
                D += 1LL<<j;
            }
        }
    }
    for (j=0;j<=63;j++) {
        f += B[j] * (1LL<<j);
    }
    f += max;
    printf("%lld\n", f);
    return 0;
} 