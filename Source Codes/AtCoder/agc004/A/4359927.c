#include<stdio.h>
int main()
{
    unsigned long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
        printf("0\n");
    else
    {
        unsigned long long int x;
        if (a > c)
        {
            x = a;
            a = c;
            c = x;
        }
        if (b > c)
        {
            x = b;
            b = c;
            c = x;
        }
        printf("%lld\n", a*b);
    }
    return 0;
} 