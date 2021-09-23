#include<stdio.h>
int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d\n", 60 * 18 - 60 * h - m);
    return 0;
} 