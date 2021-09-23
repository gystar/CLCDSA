#include <stdio.h>

int main(void) {
    int a, b, ans;

    scanf("%d %d", &a, &b);

    ans = (b - (a % b)) % b;

    printf("%d\n", ans);

    return 0;
} 