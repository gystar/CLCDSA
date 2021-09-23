#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.0f\n", round((a + b) / 2));

    return 0;
} 