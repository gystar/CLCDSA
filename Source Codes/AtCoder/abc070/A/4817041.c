#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char x[3];
    scanf("%s", x);
    if (x[0] == x[2])
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
} 