#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i;
    int a[100005];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    unsigned long long int sum[100005];
    sum[0] = 0;
    for (i = 0; i < n; i++)
        sum[i + 1] = sum[i] + a[i];
    unsigned long long int ans = 0;
    for (i = 0; i <= n - k; i++)
        ans += sum[i + k] - sum[i];
    printf("%lld\n", ans);
    return 0;
} 