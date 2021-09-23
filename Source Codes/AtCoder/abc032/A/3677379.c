#include <stdio.h>

int main() {
    int a, b, n;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &n);

    for (int i = n; i <= n + (a * b); i++) {
        if (i % a == 0 && i % b == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
} 