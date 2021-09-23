#include <stdio.h>
int h, m;
int main()
{
    scanf("%d %d", &h, &m);
    printf("%d\n", 1080 - h * 60 - m);
} 