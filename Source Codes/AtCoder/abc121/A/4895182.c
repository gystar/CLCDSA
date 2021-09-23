#include<stdio.h>
int main(void)
{
    int H,W,h,w,c=0;
    scanf("%d%d%d%d",&H,&W,&h,&w);
    c=(H-h)*(W-w);
    printf("%d",c);

    return 0;
} 