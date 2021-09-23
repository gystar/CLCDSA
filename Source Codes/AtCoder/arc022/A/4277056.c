#include<stdio.h>
#include<string.h>
int main()
{
    char s[102];
    scanf("%s", s);
    int x = 0;
    int n = strlen(s);
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'I' || s[i] == 'i')
        {
            x++;
            break;
        }
        i++;
    }
    while (i < n)
    {
        if (s[i] == 'C' || s[i] == 'c')
        {
            x++;
            break;
        }
        i++;
    }
    while (i < n)
    {
        if (s[i] == 'T' || s[i] == 't')
        {
            x++;
            break;
        }
        i++;
    }
    if (x == 3)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
} 