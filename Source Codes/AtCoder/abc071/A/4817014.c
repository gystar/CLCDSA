#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);
    int disa = abs(x - a), disb = abs(x - b);
    if (disa > disb)
    {
        printf("B\n");
    }
    else
    {
        printf("A\n");
    }
    return 0;
} 