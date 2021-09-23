#include <stdio.h>

#define MAXN 200000
int a[MAXN];

int main(void)
{
    int n, m;
    scanf("%i %i", &n, &m);

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        scanf("%i %i", &u, &v);
        a[u]++;
        a[v]++;
    }

    for (int i = 1; i <= m; i++)
    {
        if (a[i] % 2)
        {
            puts("NO");
            return 0;
        }
    }

    puts("YES");

    return 0;
} 