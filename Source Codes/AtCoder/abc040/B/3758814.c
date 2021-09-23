#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int h, w;
    int min;

    scanf("%d", &n);
    min = n;

    for (int h = 1; h <= n / 2 + 1; h++) {
        w = n / h;
        if (min > abs(h - w) + n - (w * h)) {
            min = abs(h - w) + n - (w * h);
        }
    }
    printf("%d\n", min);
    return 0;
} 