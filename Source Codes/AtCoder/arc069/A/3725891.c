#include <stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld%lld",&n,&m);
    if(2*n<=m)
    {
        printf("%lld",n+(m-2*n)/4);
    }
    else
    {
        printf("%lld",m/2);
    }
    return 0;
} 