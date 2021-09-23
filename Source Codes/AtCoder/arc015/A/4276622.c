#include<stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    n *= 9;
    n /= 5;
    n += 32;
    printf("%.20lf\n", n);
    return 0;
} 