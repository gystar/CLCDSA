#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n;
    scanf("%lld", &n);
    long long int x;
    x = ceil(sqrt(n));
    while (n%x > 0)
        x--;
    int ans = 0;
    x = n / x;
    while (x > 0)
    {
        ans++;
        x /= 10;
    }
    printf("%d\n", ans);
    return 0;
} 