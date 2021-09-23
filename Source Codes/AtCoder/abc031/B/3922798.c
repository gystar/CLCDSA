#include<stdio.h>
int n,srx,sry,lhy,i;
int main()
{
    scanf("%d%d%d",&srx,&sry,&n);
    for(i=1;i<=n;++i)
    {scanf("%d",&lhy);
    if(lhy<srx)
    printf("%d\n",srx-lhy);
    else if(lhy>sry)
    printf("-1\n");
    else
    printf("0\n");}
    return 0;
    } 