#include<stdio.h>
int main()
{
    int c;
    scanf("%d", &c);
    int i, x;
    int maxn, maxm, maxl;
    maxn = maxm = maxl = 0;
    int n, m, l;
    for (i = 0; i < c; i++)
    {
        scanf("%d %d %d", &n, &m, &l);
        if (n < m)
        {
            x = n;
            n = m;
            m = x;
        }
        if (n < l)
        {
            x = n;
            n = l;
            l = x;
        }
        if (m < l)
        {
            x = m;
            m = l;
            l = x;
        }
        if (maxn < n)
            maxn = n;
        if (maxm < m)
            maxm = m;
        if (maxl < l)
            maxl = l;
    }
    printf("%d\n", maxn*maxm*maxl);
    return 0;
} 