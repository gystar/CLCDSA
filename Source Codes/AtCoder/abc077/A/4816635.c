#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char c1[4] = {0}, c2[4] = {0};
    scanf("%s%s", c1, c2);
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        if (c1[i] == c2[2 - i])
        {
            k++;
        }
    }
    if (k == 3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
} 