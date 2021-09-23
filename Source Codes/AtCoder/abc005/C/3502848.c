#include <stdio.h>

int main() {
    int t, n, m;
    int a[101], b[101];
    int min, max, takoyaki = 0;

    scanf("%d", &t);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    if (n >= m) {
        for (int i = 0; i < m; i++) {
            takoyaki = 0;
            max = b[i];
            min = b[i] - t;
            if (min < 0) {
                min = 0;
            }

            for (int j = 0; j < n; j++) {
                if (min <= a[j] && max >= a[j]) {
                    a[j] = -1;
                    takoyaki = 1;
                    break;
                }
            }

            if (takoyaki == 0) {
                break;
            }
        }
    }

    if (takoyaki == 0) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    return 0;
} 