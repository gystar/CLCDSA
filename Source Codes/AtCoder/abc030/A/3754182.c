#include<stdio.h>
double mzy,zjq,lhy,lgx,srx,sry;
int main()
{
    scanf("%lf%lf%lf%lf",&mzy,&zjq,&lhy,&lgx);
    srx=zjq/mzy;
    sry=lgx/lhy;
    if(srx<sry)
    printf("AOKI\n");
    if(srx==sry)
    printf("DRAW\n");
    if(srx>sry)
    printf("TAKAHASHI\n");
    return 0;
} 