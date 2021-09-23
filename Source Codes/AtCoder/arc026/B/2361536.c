#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    long long int n,sum=0;
    scanf("%lli",&n);
    if(n==1)
    {
        printf("Deficient\n");
        return 0;
    }
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            sum+=i;
            sum+=n/i;
        }
        if(i==sqrt(n)&&n%i==0)
        {
            sum=sum-i;
        }
    }
    sum=sum-n;
    if(sum==n)
    {
        printf("Perfect\n");
    }
    else
    {
            if(sum<n)
            {
                printf("Deficient\n");
            }
        else
        {
            printf("Abundant\n");
        }
    }
    return 0;
} 