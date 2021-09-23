#include <stdio.h>

int main(int argc, char const *argv[]) {
    // ??
    int n;
    int a[10];
    // ??
    scanf("%d", &n );
    for (size_t i = 0; i < n; i++) {
        scanf("%d", &a[i] );
    }
    // ??
    int ans = 0;
    int i = 0;
    while ( i < n) {
        while (a[i]%2==0 || a[i]%3==2) {
            ans ++;
            a[i]--;
        }
        i++;
    }
    // ??
    printf("%d\n", ans );
    return 0;
} 