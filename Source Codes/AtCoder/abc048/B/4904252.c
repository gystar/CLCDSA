#include <stdio.h>
int main(void)
{
    long long int a,b,x,ans=0,i,j;
    scanf("%lld%lld%lld", &a,&b,&x);
    if(a==0) i=0;
    else i=((a-1)-((a-1)%x))/x+1;
    j=(b-(b%x))/x+1;
    ans=j-i;

    printf("%lld", ans);
    return 0;
} 