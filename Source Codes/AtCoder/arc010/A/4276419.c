#include<stdio.h>
int main()
{
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int c, i;
    for (i = 0; i < m; i++)
    {
        if (n <= a)
            n += b;
        scanf("%d", &c);
        n -= c;
        if (n < 0)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("complete\n");
    return 0;
} 