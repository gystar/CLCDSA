#include <stdio.h>
#include <stdlib.h>

// ????
long lPow (long n, long m) {
    if (m == 0) {
        return 1;
    } else if (m == 1) {
        return n;
    } else if (m%2 == 0) {
        return lPow(n, m/2)*lPow(n, m/2);
    } else {
        return n*lPow(n, m-1);
    }
}
// ?????
long lFactrial (int n, long Mod, long *factrial) {
    long ans;
    if (n == 0) {
        return 1;;
    }
    ans = (n*factrial[n-1])%Mod;
    return ans;
}
// ??????
long modlPow (long n, long m, long Mod) {
    long ans = 1;
    while (m) {
        if (m&1) {
            ans = (ans*n)%Mod;
        }
        m = m/2;
        n = (n*n)%Mod;
    }
    return ans;
}

// nHk???
void  calc_nHk (int n, int k) {
    long Mod = lPow(10, 9)+7;
    long nHk;
    int N = n+k-1;
    long *factrial, *inverse;
    factrial = (long *)malloc(sizeof(long)*(N+1));
    inverse = (long *)malloc(sizeof(long)*(N+1));
    // ???????
    factrial[0] = 1; inverse[0] = 1;
    for (size_t i = 1; i <= N; i++) {
        factrial[i] = i*factrial[i-1]%Mod;
        inverse[i] = modlPow(factrial[i], (Mod-2), Mod);
    }
    // ??
    /*
    for (size_t i = 0; i < N; i++) {
        printf("%ld \n", factrial[i]);
        printf("%ld ", inverse[i]);
    }
    printf("\n");
    */
    // nHk???
    nHk = factrial[n+k-1]*inverse[n-1]%Mod*inverse[k]%Mod;
    // ??
    printf("%ld\n", nHk);
    // ?????
    free(factrial); free(inverse);
}

// ???
int main(int argc, char const *argv[]) {
    // ??
    int n, k;
    // ??
    scanf("%d %d", &n, &k);
    // ??
    calc_nHk(n, k);
    return 0;
} 