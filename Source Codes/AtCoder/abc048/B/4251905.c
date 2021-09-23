#include <stdio.h>
long long func(long long n,long long x){
    if(n>=0)return n/x+1;
    return 0;
}
int main()
{
    long long a,b,x;
    scanf("%lld%lld%lld",&a,&b,&x);
    printf("%lld",func(b,x)-func(a-1,x));
    return 0;
} 