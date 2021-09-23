#include<stdio.h>
int main()
{
    int l;
    scanf("%d", &l);
    int i;
    int b[100005];
    for (i = 0; i < l; i++)
        scanf("%d", &b[i]);
    int check = 0;
    for (i = 0; i < l; i++)
        check ^= b[i];
    if (check != 0)
    {
        printf("-1\n");
        return 0;
    }
    int a[100005];
    a[0] = 0;
    for (i = 0; i < l - 1; i++)
        a[i + 1] = b[i] ^ a[i];
    for (i = 0; i < l; i++)
        printf("%d\n", a[i]);
    return 0;
} 