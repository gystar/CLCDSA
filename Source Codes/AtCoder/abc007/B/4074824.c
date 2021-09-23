#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[10 + 1];
    scanf("%10s\n", s);

    if (strlen(s) == 1 && s[0] == 'a')
    {
        printf("-1\n");
    }
    else
    {
        printf("a\n");
    }

    return 0;
} 