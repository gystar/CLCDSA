#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char s[4];
    scanf("%s", s);
    if (s[1] == s[2])
    {
        if (s[0] == s[1] || s[2] == s[3])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("No\n");
    }
    return 0;
} 