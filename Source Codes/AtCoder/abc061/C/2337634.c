#include <stdio.h>

int main(void)
{
    size_t n, k;
    scanf("%zu %zu", &n, &k);
    size_t u[100002] = { 0 };
    for (size_t i = 0; i < n; ++i) {
        size_t a, b;
        scanf("%zu %zu", &a, &b);
        u[a - 1] += b;
    }
    size_t t = 0;
    for (size_t i = 0; i < 100001; ++i) {
        t += u[i];
        if (t >= k) {
            printf("%zu\n", i + 1);
            break;
        }
    }
    return 0;
} 