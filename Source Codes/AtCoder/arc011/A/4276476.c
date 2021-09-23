#include<stdio.h>
int main()
{
    int m, n, N;
    scanf("%d %d %d", &m, &n, &N);
    int ans = N;
    int s = 0;
    int r = N;
    int a;
    while (r > 0)
    {
        a = r + s;
        s = a % m;
        r = (a / m)*n;
        ans += r;
    }
    printf("%d\n", ans);
    return 0;
} 