#include<stdio.h>
long long n,i,sqn,sum;
int main()
{
    scanf("%lld",&n);
    if(n==1)
    {printf("Deficient\n");
    return 0;}
    for(i=1;i*i<=n;i++)
    if(n%i==0)
    {sum+=i;
    sum+=n/i;}
    sum-=n;
    sqn=sqrt(n);
    if(sqn*sqn==n)
    sum-=sqn;
    if(sum==n)
    printf("Perfect\n");
    if(sum<n)
    printf("Deficient\n");
    if(sum>n)
    printf("Abundant\n");
    return 0;
} 