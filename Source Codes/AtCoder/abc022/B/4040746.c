#include<stdio.h>
int srx[100001],i,sry,n;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {scanf("%d",&sry);  
    srx[sry]=1;}
    sry=0;
    for(i=1;i<=100001;++i)
    if(srx[i])
    sry++;
    printf("%d\n",n-sry);
    return 0;
} 