#include<stdio.h>
int main()
{
    unsigned long long int n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);
    if (a > b)
        printf("0\n");
    else if (a < b && n < 2)
        printf("0\n");
    else if (a == b)
        printf("1\n");
    else
        printf("%lld\n", (b*(n - 1) + a) - (a*(n - 1) + b) + 1);
    return 0;
} 