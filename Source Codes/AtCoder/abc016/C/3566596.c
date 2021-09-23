#include <stdio.h>

#define INF 1e9

int n, m;
int d[12][12];

int min(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

void warshall_floyd() {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main() {
    int a, b, ans;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            d[i][j] = INF;
        }
        d[i][i] = 0;
    }

    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        a--;
        b--;
        d[a][b] = 1;
        d[b][a] = 1;
    }

    warshall_floyd();

    for (int i = 0; i < n; i++) {
        ans = 0;
        for (int j = 0; j < n; j++) {
            if (d[i][j] == 2) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
} 