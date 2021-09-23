#include <stdio.h>
#include <stdint.h>
 
int64_t moddiv(int64_t a, int64_t b, int64_t mod) {
    int64_t n=a%mod, k=b%mod, p=mod-2;
    while (p) {
        if (p & 1)
            n *= k, n %= mod;

        k *= k, k %= mod;
        p >>= 1;
    }

    return n;
}
 
int64_t mod_choose(int64_t n, int64_t k, int64_t mod) {
    int64_t c=1, d=1;
    for (int64_t i=n%mod, j=k; j; (--i, --j)) {
        c *= i, c %= mod;
        d *= j, d %= mod;
    }
 
    return moddiv(c, d, mod);
}
 
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
 
    printf("%lld\n", mod_choose(n+k-1, n-1, 1e9+7));
    return 0;
} 