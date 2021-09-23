#include <stdio.h>

int main()
{
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    long long ans=a*b%1000000007;
    ans*=c;
    ans%=1000000007;
    printf("%lld",ans);
    return 0;
} 