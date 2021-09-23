#include <stdio.h>
int main()
{
    char s[15];
    scanf("%s", s);
    if (s[5] == '1' || s[6] > '4')
    {
        printf("TBD");
    }
    else
    {
        printf("Heisei");
    }
    return 0;
} 