#include<stdio.h>

int main(void)
{
    int a,b,h,w,s;

    scanf("%d%d",&h,&w);
    scanf("%d%d",&a,&b);
    s=(h-a)*(w-b);
    printf("%d\n",s);
    return 0;
} 