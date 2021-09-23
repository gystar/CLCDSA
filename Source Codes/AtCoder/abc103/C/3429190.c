#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, sum = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        sum += a - 1;
    }
    printf("%d", sum);
    return 0;
} 