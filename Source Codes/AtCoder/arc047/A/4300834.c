#include<stdio.h>
int main()
{
    int n, l;
    scanf("%d %d", &n, &l);
    int i;
    char  s[100005];
    scanf("%s", s);
    int ans = 0;
    int p = 1;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '+')
            p++;
        else
            p--;
        if (p > l)
        {
            ans++;
            p = 1;
        }
    }
    printf("%d\n", ans);
    return 0;
} 