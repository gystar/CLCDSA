#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[55], b[55];
    int i;
    for (i = 0; i < m; i++)
        scanf("%d %d", &a[i], &b[i]);
    int ans = 0;
    int j;
    int p[55];
    int x;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <= n; j++)
            p[j] = 0;
        p[1] = 1;
        x = 1;
        while (x > 0)
        {
            x = 0;
            for (j = 0; j < m; j++)
            {
                if (j != i)
                {
                    if (p[a[j]] == 1 && p[b[j]] == 0)
                    {
                        p[b[j]] = 1;
                        x = 1;
                    }
                    else if (p[a[j]] == 0 && p[b[j]] == 1)
                    {
                        p[a[j]] = 1;
                        x = 1;
                    }
                }
            }
        }
        x = 0;
        for (j = 1; j <= n; j++)
            if (p[j] == 0)
                x++;
        if (x > 0)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
} 