#include<stdio.h>
int main()
{
    unsigned long long int a, b, k, l;
    scanf("%lld %lld %lld %lld", &a, &b, &k, &l);
    unsigned long long int ans = b * (k / l);
    k %= l;
    if (a*k < b)
        ans += a * k;
    else
        ans += b;
    printf("%lld\n", ans);
    return 0;
} 