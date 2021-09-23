#include<stdio.h>
#include<stdlib.h>
int a[100005];
int asc(const void *x,const void *y)
{
    return a[*(int*)y] - a[*(int*)x];
}
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int b[100005];
    for (i = 0; i < n; i++)
        b[i] = i;
    qsort(b, n, sizeof(int), asc);
    for (i = 0; i < n; i++)
        printf("%d\n", b[i] + 1);
    return 0;
} 