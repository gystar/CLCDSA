#include<stdio.h>
#include<stdlib.h>
int p[100005];
int asc(const void *x, const void *y)
{
    return p[*(int *)y] - p[*(int *)x];
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i;
    int a[100005];
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    int k = 0;
    for (i = n - 1; i >= 0; i--)
    {
        p[i] = k;
        k++;
    }
    for (i = 0; i < m; i++)
    {
        p[a[i] - 1] = k;
        k++;
    }
    int q[100005];
    for (i = 0; i < n; i++)
        q[i] = i;
    qsort(q, n, sizeof(int), asc);
    for (i = 0; i < n; i++)
        printf("%d\n", q[i] + 1);
    return 0;
} 