#include<stdio.h>

int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    if(2*n>=m)
        printf("%lld\n", m/2);
    else
    {
        long long s=0;
        s+=n;
        m-=2*n;
        s+=m/4;
        printf("%lld\n", s);
    }
    return 0;
} 