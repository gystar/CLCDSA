#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < 0 && b>0)
        a++;
    printf("%d\n", b - a);
    return 0;
} 