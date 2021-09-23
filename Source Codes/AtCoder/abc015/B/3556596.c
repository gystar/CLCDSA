#include <stdio.h>

int main() {
    int n, a, cnt = 0;
    float sum = 0.0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a != 0) {
            sum += a;
            cnt++;
        }
    }

    printf("%d\n", (int)((sum / cnt) + 0.9));
    return 0;
} 