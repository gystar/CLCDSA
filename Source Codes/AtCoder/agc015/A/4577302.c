#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,a,b,num = 0;
    scanf("%lld %lld %lld",&n,&a,&b);
    if(n == 1)
    {
        if(a == b)
            num = 1;
        else
            num = 0;
    }
    else
    {
        if(a == b)
            num = 1;
        else
            num = (n - 2) * (b - a) + 1;
    }
    if(a > b)
        num = 0;
    printf("%lld\n",num);
    return 0;
} 