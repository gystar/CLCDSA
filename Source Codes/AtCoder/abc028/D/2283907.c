#include<stdio.h>
int main()
{
    double n, k;
    scanf("%lf %lf", &n, &k);
    double ans;
    ans = (1 + ((n - 1) * 3) + (6 * (k - 1)*(n - k)));
    ans /= (n*n*n);
    printf("%.20lf\n", ans);
    return 0;
} 