#include "stdio.h"
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if((a+b)%2 == 0)
        printf("%d\n", (a+b)/2);
    else
        printf("%d\n", (a+b+1)/2);
    return 0;
} 