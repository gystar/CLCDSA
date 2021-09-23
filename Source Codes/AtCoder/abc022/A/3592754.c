#include <stdio.h>

int main() {
    int n, s, e;
    int w, a, cnt = 0;

    scanf("%d %d %d", &n, &s, &e);
    scanf("%d", &w);
    if (w >= s && w <= e) {
        cnt++;
    }
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a);
        w += a;
        if (w >= s && w <= e) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
} 