#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    char s[100][11], t[100][11];
    int i, j, k;
    for (i=0; i<n; i++)
    {
        scanf("%s", s[i]);
    }
    scanf("%d", &m);
    for (i=0; i<m; i++)
    {
        scanf("%s", t[i]);
    }
    int count_max = 0;
    for (i=0; i<n; i++)
    {
        int count = 1;
        for (j=0; j<n; j++)
        {
            if (j==i) continue;
            if (strcmp(s[i], s[j]) == 0) {
                count ++;
            }
        }
        for (k=0; k<m; k++)
        {
            if (strcmp(s[i], t[k]) == 0) {
                count --;
            }
        }
        if (count > count_max) count_max = count;
    }
    printf("%d\n", count_max);
    return 0;
} 