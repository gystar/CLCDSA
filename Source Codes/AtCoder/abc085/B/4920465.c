#include <stdio.h>
#include <stdlib.h>
int fw(const void *a, const void *b)
{
    return *(long int *)a - *(long int *)b;
}
int bw(const void *a, const void *b)
{
    return *(long int *)b - *(long int *)a;
}
int main()
{
    int n, d[111];
    int count = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d[i]);
    }
    qsort(d, n, sizeof(int), fw);
    for (int i = 1; i < n; i++)
    {
        if (d[i] != d[i - 1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
} 