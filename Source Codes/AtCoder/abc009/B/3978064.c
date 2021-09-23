#include<stdio.h>
int n,srx,sry,t;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {scanf("%d",&t);
    if(t>srx)
    {sry=srx;
    srx=t;}
    else if(t<srx&&t>sry)
    sry=t;}
    printf("%d\n",sry);
    return 0;
} 