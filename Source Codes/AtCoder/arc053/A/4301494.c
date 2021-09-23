#include<stdio.h>
int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    printf("%d\n", w*(h - 1) + h * (w - 1));
    return 0;
} 