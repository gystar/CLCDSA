#include<stdio.h>
int a[200000];
int main(void)
{
    int i, n, l, r, x = 1, f = 0;
    l = r = 100000;
    scanf("%d",&n);
    if(n%2==0)f=1;
    scanf("%d",&a[100000]);
    while(x<n)
    {
        if(f){scanf("%d",&a[--l]);x++;}
        if(x>=n)break;
        scanf("%d",&a[++r]);x++;
        f = 1;
    }
    for (i=l; i<=r; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
} 