#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[100005] = {};
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    unsigned long long int  ans = 0;
    unsigned long long int x = 1;
    for (i = 1; i <= n; i++)
        if (a[i] > a[i - 1])
            x++;
        else
        {
            ans += x * (x - 1) / 2;
            x = 1;
        }
    ans += n;
    printf("%lld\n", ans);
    return 0;
} 