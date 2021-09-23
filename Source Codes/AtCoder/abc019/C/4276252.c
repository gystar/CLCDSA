#include<stdio.h>
#include<stdlib.h>
int asc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[100005];
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        while (a[i] % 2 == 0)
            a[i] /= 2;
    qsort(a, n, sizeof(int), asc);
    int ans = 1;
    for (i = 1; i < n; i++)
        if (a[i] > a[i - 1])
            ans++;
    printf("%d\n", ans);
    return 0;
} 