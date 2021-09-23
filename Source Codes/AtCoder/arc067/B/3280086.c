#include<stdio.h>

int main()
{

    long long int n,a,b,d1,d2,p,sum,i;
    long long int num[100100];
    scanf("%lld %lld %lld",&n,&a,&b);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&num[i]);
    }
     sum=0;
    for(i=0; i<n-1; i++)
    {
        d1=abs(num[i]-num[i+1])*a;
        d2=b;
        if(d1<d2)sum=sum+d1;
        else
            sum=sum+d2;
    }
    printf("%lld\n",sum);


    return 0;
} 