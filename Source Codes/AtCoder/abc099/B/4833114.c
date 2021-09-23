#include <stdio.h>

int main(void)
{
    int a,b;
    int n,x;
    scanf("%d %d",&a,&b);
    n=b-a-1;
    x=(n*(n+1))/2-a;
    printf("%d\n",x);
    return 0;
} 