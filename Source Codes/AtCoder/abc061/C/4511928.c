#include<stdio.h>
int main()
{
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long i, a, b;
    long long p[100005] = {};
    for (i = 0; i < n; i++)
    {
        scanf("%lld %lld", &a, &b);
        p[a] += b;
    }
    i = 0;
    while (k > 0)
    {
        k -= p[i];
        i++;
    }
    i--;
    printf("%lld\n", i);
    return 0;
} 