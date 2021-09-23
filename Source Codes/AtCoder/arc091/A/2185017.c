#include <stdio.h>
int main(void)
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    if(n==1 && m==1)
    {
        printf("1");
        return 0;
    }
    long long int ans;
    if(n==1 || m==1)
    {
        ans=n+m-3;
        printf("%lld",ans);
    }
    else
    {
        ans=(n-2)*(m-2);
        printf("%lld",ans);
    }
} 