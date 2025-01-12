#include <stdio.h>
static long n, k, a, i, sum;
long min2(long a, long b) {
    return a <= b ? a : b;
}
long min(long a, long b, long c, long d) {
    return min2(min2(a, b), min2(c, d));
}
int main(void) {
    scanf("%ld%ld", &n, &k);
    for (i = 0; i < n; ++i) {
        scanf("%ld", &a);
        sum += a * min(i + 1, n - k + 1, n - i, k);
    }
    printf("%ld\n", sum);
    return 0;
} 