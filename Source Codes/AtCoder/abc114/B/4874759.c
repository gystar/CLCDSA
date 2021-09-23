#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[11] = {0};
    scanf("%s", s);
    int len = 0, min = 753;
    while (s[len])
    {
        len++;
    }
    int i;
    for (i = 0; i < len - 2; i++)
    {

        if (abs(753 - (100 * (s[i] - '0') + 10 * (s[i + 1] - '0') + (s[i + 2] - '0'))) < min)
        {
            min = abs(753 - (100 * (s[i] - '0') + 10 * (s[i + 1] - '0') + (s[i + 2] - '0')));
        }
    }
    printf("%d\n", min);
    return 0;
} 