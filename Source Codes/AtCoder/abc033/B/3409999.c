#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    char s[1003][25];
    int p[1003];
    for (i = 0; i < n; i++)
        scanf("%s %d", s[i], &p[i]);
    int sum = 0, max = 0;
    for (i = 0; i < n; i++)
    {
        sum += p[i];
        if (p[max] < p[i])
            max = i;
    }
    if (2 * p[max] <= sum)
        printf("atcoder\n");
    else
        printf("%s\n", s[max]);
    return 0;
} 