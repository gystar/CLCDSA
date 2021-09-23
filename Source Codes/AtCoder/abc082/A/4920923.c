#include <stdio.h>
int main()
{
    double a, b, d, e;
    int c;
    scanf("%lf%lf", &a, &b);
    e = (a + b) / 2;
    c = (a + b) / 2;
    d = e - c;

    if (d >= 0.5)
    {
        c = c + 1;
        printf("%d", c);
    }
    else
    {
        printf("%d", c);
    }
} 