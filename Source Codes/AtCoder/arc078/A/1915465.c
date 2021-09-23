#include<stdio.h>
#include<math.h>
int main()
{
    long long int suml,sumr=0,min,x;
    int N,i,p=1;
    scanf("%d",&N);
    long long int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%lld",&a[i]);
    }
    suml=a[0];
    for(i=1;i<N;i++)
    {
        sumr=sumr+a[i];
    }
    min=llabs(sumr-suml);
    for(p=1;p<N-1;p++){
    suml=suml+a[p];
    sumr=sumr-a[p];
    x=llabs(sumr-suml);
    if(x<min)
        min=x;
    }
    printf("%lld",min);
    return 0;
} 