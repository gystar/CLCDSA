#include<stdio.h>

int main()
{
    int x, a, b;
    scanf("%d %d %d",&x, &a, &b);
    x = x - a;
    printf("%d\n",x % b);

    return 0;
} 