#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int i, N;
    long long A, B, T, X1, X2;

    scanf("%d%lld%lld", &N, &A, &B);
    T = 0;
    scanf("%lld", &X1);
    for (i=1;i<N;i++) {
        scanf("%lld", &X2);
        if (A*(X2-X1) < B) T += A*(X2-X1);
        else T += B;
        X1 = X2;
    }

    printf("%lld\n", T);
    return 0;
} 