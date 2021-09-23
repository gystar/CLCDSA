#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    n%=(a+b);
    if(n>0&&n<=a)puts("Ant");
    else puts("Bug");
    return 0;
} 