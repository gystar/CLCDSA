#include <stdio.h>

int main(void)
{
    int N, sum = 0, i, j;
    scanf("%d", &N);
    for (i = 1; i <= 9; ++i) {
        for (j = 1; j <= 9; ++j) sum += i * j;
    }
    for (i = 1; i <= 9; ++i) {
        for (j = 1; j <= 9; ++j) {
            if (N + i * j == sum) printf("%d x %d\n", i, j);
        }
    }
    return 0;
} 