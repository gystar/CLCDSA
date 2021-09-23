#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    for (int i = 0; i <= x; i++) {
        if (x == i * i * i * i) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
} 