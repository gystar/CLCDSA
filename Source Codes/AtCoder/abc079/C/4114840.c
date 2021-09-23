#include<stdio.h>
int main(void)
{
    int b;
    int a[4];
    char c[4];
    gets(c);
    a[0]=c[0]-'0';
    a[1]=c[1]-'0';
    a[2]=c[2]-'0';
    a[3]=c[3]-'0';
    if(a[0]+a[1]+a[2]+a[3]==7)
        printf("%d+%d+%d+%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]+a[1]+a[2]-a[3]==7)
        printf("%d+%d+%d-%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]+a[1]-a[2]+a[3]==7)
        printf("%d+%d-%d+%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]+a[1]-a[2]-a[3]==7)
        printf("%d+%d-%d-%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]-a[1]+a[2]+a[3]==7)
        printf("%d-%d+%d+%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]-a[1]+a[2]-a[3]==7)
        printf("%d-%d+%d-%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]-a[1]-a[2]+a[3]==7)
        printf("%d-%d-%d+%d=7\n",a[0],a[1],a[2],a[3],a[4]);
    else if(a[0]-a[1]-a[2]-a[3]==7)
        printf("%d-%d-%d-%d=7\n",a[0],a[1],a[2],a[3],a[4]);
} 