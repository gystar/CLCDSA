#include<stdio.h>
int main()
{
    unsigned long long int a, k;
    scanf("%lld %lld", &a, &k);
    if (k == 0)
        printf("%lld\n", 2000000000000 - a);
    else
    {
        unsigned long long int ans = 0;
        while (a < 2000000000000)
        {
            ans++;
            a += 1 + k * a;
        }
        printf("%ld\n", ans);
    }
    return 0;
} 