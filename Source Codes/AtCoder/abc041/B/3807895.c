#include <stdio.h>

int mod = 1000000007;

int main() {
    unsigned long long int a, b, c, ans;

    scanf("%llu %llu %llu", &a, &b, &c);

    ans = (((a * b) % mod) * c) % mod;
    printf("%llu\n", ans);
    return 0;
} 