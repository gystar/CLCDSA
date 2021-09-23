#include <stdio.h>
int main()
{  long long a,b,c,k,i;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(k%2==1)printf("%lld",b-a);else printf("%lld",a-b);
    return 0;
} 