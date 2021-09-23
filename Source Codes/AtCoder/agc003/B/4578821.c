#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a;
    unsigned long long int ans = 0;
    int x = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == 0)
            x = 0;
        else
        {
            if (x == 1)
            {
                ans++;
                a--;
                x = 0;
            }
            ans += (unsigned long long int)a / 2;
            x = a % 2;
        }
    }
    printf("%lld\n", ans);
    return 0;
} 