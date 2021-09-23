#include<stdio.h>
int main()
{
    int L, R;
    scanf("%d %d", &L, &R);
    int i, j;
    int l[102], r[102];
    for (i = 0; i < L; i++)
        scanf("%d", &l[i]);
    for (i = 0; i < R; i++)
        scanf("%d", &r[i]);
    int ans = 0;
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < R; j++)
        {
            if (l[i] == r[j])
            {
                ans++;
                r[j] = -1;
                break;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
} 