#include <stdio.h>

int main(int argc, char const *argv[]) {
    // ??
    int a, b;
    // ??
    scanf("%d %d", &a, &b);
    // ??
    int ans = b-a%b;
    ans = (ans==b ? 0:ans);
    // ??
    printf("%d\n", ans);
    return 0;
} 