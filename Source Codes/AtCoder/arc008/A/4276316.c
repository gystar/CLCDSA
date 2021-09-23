#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 10 < 7)
        printf("%d\n", 100 * (n / 10) + 15 * (n % 10));
    else
        printf("%d\n", 100 * ((n + 10) / 10));
    return 0;
} 