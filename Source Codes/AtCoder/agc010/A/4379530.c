#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[100005];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int k = 0;
    for (i = 0; i < n; i++)
        if (a[i] % 2 == 1)
            k++;
    if (k % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
} 