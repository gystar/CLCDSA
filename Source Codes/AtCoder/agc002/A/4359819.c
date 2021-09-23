#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a<1 && b>-1)
        printf("Zero\n");
    else if (a > 0)
        printf("Positive\n");
    else if ((b - a) % 2 == 0)
        printf("Negative\n");
    else
        printf("Positive\n");
    return 0;
} 