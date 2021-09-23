#include<stdio.h>
int i,srx,sry,lgx=-1000;
int max(int x,int y)
{
    if(x>y)
    return x;
    return y;
}
int main()
{
    scanf("%d%d",&srx,&sry);
    lgx=max(lgx,(srx%100+900-sry));
    lgx=max(lgx,((srx/100)*100+srx%10+90)-sry);
    lgx=max(lgx,srx+9-srx%10-sry);
    lgx=max(lgx,srx-(sry%100+100));
    lgx=max(lgx,srx-((sry/100)*100+sry%10));
    lgx=max(lgx,srx-(sry-sry%10));
    printf("%d\n",lgx);
    return 0;
} 