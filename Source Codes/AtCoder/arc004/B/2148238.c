#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d[500];
    int i, j;
    for (i = 0; i < n; i++)
        scanf("%d", &d[i]);
    int max;
    max = 0;
    for (i = 0; i < n; i++)
        max += d[i];
    int min;
    int sum;
    int m;
    m = sum = 0;
    for (i = 0; i < n; i++)
    {
        if (m < d[i])
        {
            sum += m;
            m = d[i];
        }
        else
            sum += d[i];
    }
    if (sum > m)
        min = 0;
    else
        min = m - sum;
    printf("%d\n%d\n", max, min);
    return 0;
} 