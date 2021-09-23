#include <stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&n,&x);
    if(n-x<x-1) printf("%d\n",n-x);
        else printf("%d\n",x-1);
} 