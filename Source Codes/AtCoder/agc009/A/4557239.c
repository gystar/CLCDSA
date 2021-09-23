#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    unsigned long long int a[100005], b[100005];
    int i;
    for (i = 0; i < n; i++)
        scanf("%lld %lld", &a[i], &b[i]);
    unsigned long long int ans = 0;
    for (i = n - 1; i >= 0; i--)
        if (b[i] > 1 && (a[i] + ans) % b[i] > 0)
            ans += b[i] - ((a[i] + ans) % b[i]);
    printf("%lld\n", ans);
    return 0;
} 