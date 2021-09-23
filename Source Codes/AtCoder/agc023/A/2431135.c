#include <stdio.h>
#include <stdlib.h>
long long int int_sort(const void * a, const void * b)
{
    if(*(long long int*)a<*(long long int*)b)
    {
        return -1;
    }
    else if(*(long long int*)a==*(long long int*)b)
    {
        return 0;
    }
    return 1;
}

int main(void)
{
    long int n;
    long long int a[200005]={};
    scanf("%ld",&n);
    for(long int p=0;p<n;p++)scanf("%lld ",&a[p]);
    long int ans=0;
    long long int sum[200005]={};
    if(n==1&&a[0]==0)
    {
        printf("1");
        return 0;
    }
    else if(n==1&&a[0]!=0)
    {
        printf("0");
        return 0;
    }
    sum[0]=a[0];
    for(long int q=0;q<n-1;q++)sum[q+1]=sum[q]+a[q+1];
    sum[n]=9999999999;
    qsort(sum,n,sizeof(sum[0]),int_sort);
    long int check=0;
    long int num=1;
    while(check<n)
    {
        while(sum[check]==sum[check+1] && check<n)
        {
            check++;
            num++;
        }
        //printf("%ld %ld##\n",sum[check],num);
        if(sum[check]==0)ans+=num;
        check++;
        ans+=num*(num-1)/2;
        num=1;
    }
    printf("%ld",ans);
} 