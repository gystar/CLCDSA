#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[1003];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int x;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            x = a[i];
            a[i] = a[i + 1];
            a[i + 1] = x;
            if (i > 0)
                i -= 2;
        }
    }
    int ans = 0;
    for (i = 0; i < n; i += 2)
        ans += a[i];
    printf("%d\n", ans);
    return 0;
} 