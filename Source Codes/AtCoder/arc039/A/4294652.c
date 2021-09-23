#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int max = -2000000000;
    int n;
    n = a;
    n = 900 + (a % 100);
    if (max < n - b)max = n - b;
    n = (a / 100) * 100 + 90 + (a % 10);
    if (max < n - b)max = n - b;
    n = (a / 10) * 10 + 9;
    if (max < n - b)max = n - b;
    n = 100 + (b % 100);
    if (max < a - n)max = a - n;
    n = (b / 100) * 100 + (b % 10);
    if (max < a - n)max = a - n;
    n = (b / 10) * 10;
    if (max < a - n)max = a - n;
    printf("%d\n", max);
    return 0;
} 