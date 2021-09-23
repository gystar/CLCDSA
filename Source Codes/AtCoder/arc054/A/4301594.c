#include<stdio.h>
int main()
{
    int l, x, y, s, d;
    scanf("%d %d %d %d %d", &l, &x, &y, &s, &d);
    s -= d;
    if (s < 0)
        s += l;
    if (x >= y)
    {
        printf("%.20lf\n", (double)(l - s) / (double)(x + y));
    }
    else
    {
        double a, b;
        a = (double)(l - s) / (double)(x + y);
        b = (double)s / (double)(y - x);
        if (a < b)
            printf("%.20lf\n", a);
        else
            printf("%.20lf\n", b);
    }
    return 0;
} 