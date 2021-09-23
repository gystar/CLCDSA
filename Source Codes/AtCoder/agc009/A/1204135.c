#include <stdio.h>
typedef long long int i64;
i64 n, a[1<<17], b[1<<17];
i64 solve(void) {
    i64 cnt = 0;
    for(i64 i = n - 1; i >= 0; i--) {
        i64 k = (a[i] + cnt) % b[i];
        cnt += k ? b[i] - k : 0;
    }
    return cnt;
}
int main(void) {
    scanf("%d", &n);
    for(i64 i = 0; i < n; i++)
        scanf("%lld%lld", &a[i], &b[i]);
    printf("%lld", solve());
    return 0;
} 