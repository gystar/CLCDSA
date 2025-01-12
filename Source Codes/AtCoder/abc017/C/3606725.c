#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n, m, l, r, s;
    int total = 0, tmp = 0, x, z;
    int t[100001] = { 0 };

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d", &l, &r, &s);
        t[l] += s;
        t[r+1] -= s;
        total += s;
    }

    x = t[1];
    for (int i = 1; i <= m; i++) {
        z += t[i];
        x = min(x, z);
    }
    printf("%d\n", total - x);
    return 0;
} 