#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    int i, m;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m < 80)
            ans += 80 - m;
    }
    printf("%d\n", ans);
    return 0;
} 