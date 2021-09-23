#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    int a, b, i;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        ans += a * b;
    }
    ans = (int)(ans*1.05);
    printf("%d\n", ans);
    return 0;
} 