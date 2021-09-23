#include<stdio.h>

long long int absh(long long int x);

int main(void)
{
    int n,i;

    scanf("%d",&n);

    long long int a[n],sum=0;

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
    }

    long long int x=a[0],abs=absh(sum-2*a[0]);
    for(i=1;i<n-1;i++){
        x+=a[i];
        if(absh(sum-2*x)<abs)
            abs=absh(sum-2*x);
    }

    printf("%lld",abs);

    return 0;
}

long long int absh(long long int x)
{
    if(x<0)
        return -x;
    else
        return x;
} 