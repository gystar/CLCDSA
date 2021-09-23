#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int ans = 0;
    while (ans*ans*ans*ans < x)
        ans++;
    printf("%d\n", ans);
    return 0;
} 