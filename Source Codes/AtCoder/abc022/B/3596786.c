#include <stdio.h>

int main() {
    int n, a, t[100001] = { 0 };
    int cnt = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        t[a]++;
    }

    for (int i = 0; i < 100001; i++) {
        if (t[i] >= 2) {
            cnt = cnt + (t[i] - 1);
        }
    }

    printf("%d\n", cnt);
    return 0;
} 