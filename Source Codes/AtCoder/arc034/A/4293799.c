#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double ans = 0;
    double a, b, c, d, e;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
        if (ans < a + b + c + d + e * 11 / 90)
            ans = a + b + c + d + e * 11 / 90;
    }
    printf("%.20lf\n", ans);
    return 0;
} 