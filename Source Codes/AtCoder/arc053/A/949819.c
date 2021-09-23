#include <stdio.h>

int main(void)
{
    int h, w;

    scanf("%d %d", &h, &w);
    printf("%d\n", (h - 1) * w + h * (w - 1));

    return (0);
} 