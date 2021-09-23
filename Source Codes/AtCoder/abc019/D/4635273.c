#include <stdio.h>
#define max(a, b) (a>b ? a:b)

int main(int argc, char const *argv[]) {
    // ??
    int N;
    // ??
    scanf("%d", &N);
    // ?? ? 1???????????
    int dist, maxdist = 0;
    int v;
    for (int i = 2; i <= N; i++) {
        printf("? 1 %d\n", i);
        fflush(stdout);
        scanf("%d", &dist);
        if (maxdist < dist) {
            maxdist = dist;
            v = i;
        }
    }
    // ???????
    int ans = maxdist;
    for (int i = 1; i <= N; i++) {
        if (i == v) {
            continue;
        }
        printf("? %d %d\n", v, i);
        fflush(stdout);
        scanf("%d", &dist);
        if (ans < dist) {
            ans = dist;
        }
    }
    // ??
    printf("! %d\n",ans);
    fflush(stdout);
    return 0;
} 