#include<stdio.h>
#include<math.h>
int srx,sry,lhy,lgx;
int main()
{
    scanf("%d%d",&srx,&sry);
    lgx=abs(srx-sry);
    while(lgx>=10)
    {lhy++;
    lgx-=10;}
    if(lgx==9)
    {lhy+=2;
    lgx=0;}
    if(lgx==8)
    {lhy+=3;
    lgx=0;}
    if(lgx>=5)
    {lhy++;
    lgx-=5;}
    if(lgx==4)
    {lhy+=2;
    lgx=0;}
    while(lgx)
    {lhy++;
    lgx--;}
    printf("%d\n",lhy);
    return 0;
} 