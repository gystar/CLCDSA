#include<stdio.h>
int main()
{
    double h, b;
    scanf("%lf %lf", &h, &b);
    h /= 100;
    printf("%.20lf\n", b*h*h);
    return 0;
} 