#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);
    if (a >= b)
    {
        printf("delicious\n");
    }
    else if (a + x >= b)
    {
        printf("safe\n");
    }
    else
    {
        printf("dangerous\n");
    }

    return 0;
} 