#include<stdio.h>
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int i;
    int r, l;
    int a[200005];
    for (i = 0; i < 200005; i++)
        a[i] = 1;
    for (i = 0; i < q; i++)
    {
        scanf("%d %d", &l, &r);
        l--;
        a[l] *= -1;
        a[r] *= -1;
    }
    for (i = 1; i < n; i++)
        a[i] *= a[i - 1];
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
            printf("0");
        else
            printf("1");
    }
    printf("\n");
    return 0;
} 