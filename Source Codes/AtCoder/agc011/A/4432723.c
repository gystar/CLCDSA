#include<stdio.h>
#include<stdlib.h>
int asc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n, c, k;
    scanf("%d %d %d", &n, &c, &k);
    int i;
    int t[100005];
    for (i = 0; i < n; i++)
        scanf("%d", &t[i]);
    qsort(t, n, sizeof(int), asc);
    int ans = 0;
    int time = t[0];
    int count = 1;
    for (i = 1; i < n; i++)
    {
        if (count == c || t[i] - time > k)
        {
            ans++;
            count = 1;
            time = t[i];
        }
        else
        {
            count++;
        }
    }
    ans++;
    printf("%d\n", ans);
    return 0;
} 