#include<stdio.h>
#include<math.h>
long long int a[200012],value[200010];
int main ()
{
    long long int n,i,min,sum=0,sum2=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    for(i=1;i<n;i++){
        sum2+=a[n-i+1];
        value[i]=llabs(sum-sum2-sum2);
    }
    min=value[i-1];
    for(i=1;i<n;i++)
        if(value[i]<min)
            min=value[i];
    printf("%lld\n",min);
    return 0;
} 