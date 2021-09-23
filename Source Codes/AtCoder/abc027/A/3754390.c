#include<stdio.h>
int srx,sry,lhy;
int main()
{
    scanf("%d%d%d",&srx,&sry,&lhy);
    if(srx==sry&&srx==lhy)
    {printf("%d\n",srx);
    return 0;}
    if(srx==sry)
    printf("%d\n",lhy);
    else if(srx==lhy)
    printf("%d\n",sry);
    else if(sry==lhy)
    printf("%d\n",srx);
    return 0;
} 