#include<stdio.h>
int main()
{
    int r, c, d;
    scanf("%d %d %d", &r, &c, &d);
    int i, j;
    int a[1003][1003];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    int max = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (i + j <= d)
                if ((d - i - j) % 2 == 0)
                    if (max < a[i][j])
                        max = a[i][j];
    printf("%d\n", max);
    return 0;
} 