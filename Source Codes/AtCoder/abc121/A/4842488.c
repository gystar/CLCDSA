#include <stdio.h>

int main()
{
    int H, W, h, w;
    scanf("%d%d%d%d", &H, &W, &h, &w);

    printf("%d\n", (H - h) * (W - w));

    return 0;
} 