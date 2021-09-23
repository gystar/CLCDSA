#include<stdio.h>
#include<math.h>
int main()
{
    double n, va, vb, l;
    scanf("%lf %lf %lf %lf", &n, &va, &vb, &l);
    printf("%.20lf\n", pow(vb / va, n)*l);
    return 0;
} 