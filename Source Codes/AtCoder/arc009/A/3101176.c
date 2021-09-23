#include<stdio.h>
int main()
{
    int n,s,a,i,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%d%d",&a,&b);
    s+=a*b;}
    s*=1.05;
    printf("%d\n",s);
    return 0;
} 