#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    long long s[num],sum=0,min,d[num-1],t;
    for(i=0,j=0;i<num;i++,j++)
        {
            scanf("%lld",&s[i]);
            sum=sum+s[i];
            if(j<num-1)
                d[j]=sum;
        }
    min=fabs(sum-2*d[0]);
    for(i=1;i<num-1;i++)
    {
        t=fabs(sum-2*d[i]);
        if(min>t)
            min=t;
    }
        printf("%lld",min);
} 