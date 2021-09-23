#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    char s[102][102];
    for (i = 0; i < n; i++)
        scanf("%s", s[i]);
    int t, a;
    t = a = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (s[i][j] == 'R')
                t++;
            else if (s[i][j] == 'B')
                a++;
    if (t > a)
        printf("TAKAHASHI\n");
    else if (t < a)
        printf("AOKI\n");
    else
        printf("DRAW\n");
    return 0;
} 