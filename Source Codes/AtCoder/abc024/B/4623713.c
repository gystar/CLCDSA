#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int ans;

int main() {
    int n, t;
    scanf("%d%d", &n, &t);

    int a[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1] + t) {
            ans += t;
        } else {
            ans += (a[i] - a[i - 1]);
        }
    }

    printf("%d\n", ans + t);
    return 0;
} 