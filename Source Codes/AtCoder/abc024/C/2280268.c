#include<stdio.h>
int main()
{
    int n, d, k;
    scanf("%d %d %d", &n, &d, &k);
    int i;
    int l[10000], r[10000];
    for (i = 0; i < d; i++)
        scanf("%d %d", &l[i], &r[i]);
    int s[100], t[100];
    for (i = 0; i < k; i++)
        scanf("%d %d", &s[i], &t[i]);
    int j;
    int max, min;
    for (i = 0; i < k; i++)
    {
        max = min = s[i];
        for (j = 0; j < d; j++)
        {
            if (l[j] <= min && min <= r[j])
                min = l[j];
            if (l[j] <= max && max <= r[j])
                max = r[j];
            if (min <= t[i] && t[i] <= max)
                break;
        }
        printf("%d\n", j + 1);
    }
    return 0;
} 