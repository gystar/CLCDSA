#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    int i;
    int a = 0;
    int ans = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '0')
                a++;
        }
        else
        {
            if (s[i] == '+')
            {
                if (a == 0)
                    ans++;
                a = 0;
            }
        }
    }
    if (a == 0)
        ans++;
    printf("%d\n", ans);
    return 0;
} 