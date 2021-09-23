#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    char x[102][10];
    for (i = 0; i < n; i++)
        scanf("%s", x[i]);
    int ans = 0;
    for (i = 0; i < 9; i++)
        if (x[0][i] != '.')
            ans++;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (x[i][j] == 'x')
                ans++;
            if (x[i][j] == 'o')
                if (x[i - 1][j] != 'o')
                    ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
} 