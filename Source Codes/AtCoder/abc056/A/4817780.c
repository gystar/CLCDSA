#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    scanf("%c %c", &a, &b);
    if (a == 'H')
    {
        printf("%c\n", b);
    }
    else
    {
        if (b == 'H')
        {
            printf("D\n");
        }
        else
        {
            printf("H\n");
        }
    }
    return 0;
} 