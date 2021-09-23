#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int  x,y,s2,s1;
    scanf("%lld%lld",&x,&y);
    if(y<x*2)
        s2=y/2;
    else
    {
        s1=y-x*2;
        s2=x+s1/4;
    }
    printf("%lld",s2);
    return 0;
} 