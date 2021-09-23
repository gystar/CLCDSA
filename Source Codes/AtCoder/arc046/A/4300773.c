#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < (n - 1) / 9 + 1; i++)
        printf("%d", (n - 1) % 9 + 1);
    printf("\n");

    return 0;
} 