#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a + d + e > b + c + e)
        printf("%d\n", a + d + e);
    else
        printf("%d\n", b + c + e);
    return 0;
} 