#include<stdio.h>
int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    int n;
    scanf("%d", &n);
    int i;
    int a[10004];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int j, k;
    k = 0;
    int ans[102][102];
    for (i = 0; i < h; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < w; j++)
            {
                ans[i][j] = k + 1;
                a[k]--;
                if (a[k] == 0)
                    k++;
            }
        }
        else
        {
            for (j = w - 1; j >= 0; j--)
            {
                ans[i][j] = k + 1;
                a[k]--;
                if (a[k] == 0)
                    k++;
            }
        }
    }
    for (i = 0; i < h; i++)
    {
        printf("%d", ans[i][0]);
        for (j = 1; j < w; j++)
            printf(" %d", ans[i][j]);
        printf("\n");
    }
    return 0;
} 