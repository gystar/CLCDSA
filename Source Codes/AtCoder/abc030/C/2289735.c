#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int x, y;
    scanf("%d %d", &x, &y);
    int ans = 0;
    int i;
    int a[100000], b[100000];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int t = 0;
    int c, d;
    c = d = 0;
    t = a[0];
    t += x;
    for (;;)
    {
        while (b[d] < t && d < m)
            d++;
        if (d == m)
            break;
        t = b[d];
        t += y;
        ans++;
        while (a[c] < t && c < n)
            c++;
        if (c == n)
            break;
        t = a[c];
        t += x;
    }
    printf("%d\n", ans);
    return 0;
} 