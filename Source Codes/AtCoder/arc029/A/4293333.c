#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int t[5];
    for (i = 0; i < n; i++)
        scanf("%d", &t[i]);
    int x;
    for (i = 0; i < n - 1; i++)
    {
        if (t[i] > t[i + 1])
        {
            x = t[i];
            t[i] = t[i + 1];
            t[i + 1] = x;
            if (i > 0)
                i -= 2;
        }
    }
    int a, b;
    a = b = 0;
    while (n > 0)
    {
        n--;
        if (a > b)
            b += t[n];
        else
            a += t[n];
    }
    if (a > b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
    return 0;
} 