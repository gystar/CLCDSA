#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    int INF=0x3f3f3f3f;
    long long f[110][11],p[110][12],c[100];
    long long Max=-1*INF;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        for(j=0; j<10; j++)
            scanf("%lld",&f[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<=10;j++)
            scanf("%lld",&p[i][j]);
    for(k=1;k<(1<<10);k++)
    {
        memset(c,0,sizeof c);
        for(i=0;i<n;i++)
        {
            for(j=0;j<10;j++)
            {
                if(f[i][j]&&((1<<j)&k))  //??? ?
                    c[i]++;
            }
        }
        long long sum=0;
        for(i=0;i<n;i++)
            sum+=p[i][c[i]];
        if(sum>Max)Max=sum;
    }
    printf("%lld",Max);
    return 0;
} 