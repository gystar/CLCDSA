#include <stdio.h>
#include <limits.h>
#define MAXN 200010
int t[MAXN], N, T;
int min(int a, int b) { return a < b ? a : b; }
int solve(void) {
    int s = 0;
    for(int i = 0; i < N; i++) s += min(t[i + 1] - t[i], T);
    return s;
}
int main(void) {
    scanf("%d%d", &N, &T);
    for(int i = 0; i < N; i++) scanf("%d", &t[i]);
    t[N] = INT_MAX;
    printf("%d", solve());
    return 0;
} 