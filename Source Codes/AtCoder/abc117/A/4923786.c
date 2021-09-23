#include<stdio.h>

int main(void)
{
    int t, x;
    double a;

    scanf("%d%d", &t, &x);

    a = (double)t / (double)x;

    printf("%lf", a);

    return 0;
} 