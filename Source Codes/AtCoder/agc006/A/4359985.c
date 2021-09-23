#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[102], t[102];
    scanf("%s%s", s, t);
    int i, j;
    int x;
    for (i = 0; i < n; i++)
    {
        x = 0;
        for (j = i; j < n; j++)
        {
            if (s[j] != t[j - i])
            {
                x++;
                break;
            }
        }
        if (x == 0)
            break;
    }
    printf("%d\n", n + i);
    return 0;
} 