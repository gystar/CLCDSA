#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int v[1000001];
    int i;
    for (i = 0; i <= 1000000; i++)
        v[i] = 0;
    int a, b;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        v[a]++;
        v[b + 1]--;
    }
    for (i = 1; i <= 1000000; i++)
        v[i] += v[i - 1];
    int ans = 0;
    for (i = 0; i <= 1000000; i++)
        if (ans < v[i])
            ans = v[i];
    printf("%d\n", ans);
    return 0;
} 